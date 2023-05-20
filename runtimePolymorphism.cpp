#include<iostream>
using namespace std;

class Person{
protected:
    string name;
public:
    Person(string name){this->name=name;}
    void showDetails(){
        cout<<"This is Person's Details of "<<this->name<<endl;
    }
};
class Student:virtual public Person{
public:
    Student(string name):Person(name){}
    void showDetails(){
        cout<<"This is Student's Details of "<<this->name<<endl;
    }
};

class Faculty:virtual public Person{
public:
    Faculty(string name):Person(name){}
    void showDetails(){
        cout<<"This is Faculty's Details of "<<this->name<<endl;
    }
};

class TA:public Student,public Faculty{
public:
    TA(string name):Person(name),Student(name),Faculty(name){}
    void showDetails(){
        cout<<"This is TA's Details of "<<this->name<<endl;
    }
};

int main(){

    TA ta("TA-1");
    ta.showDetails();

    Student *s=&ta;
    s->showDetails();

    Faculty *f=&ta;
    f->showDetails();

    Person *p=&ta;
    p->showDetails();

return 0;
}
