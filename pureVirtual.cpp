#include<iostream>
using namespace std;

class Person{
protected:
    string name;
public:
    Person(string name=""){this->name=name;}
    virtual void showDetails()=0;
};
class Student: public Person{
private:
    float cgpa;
public:
    Student(string name="",float cgpa=0):Person(name){this->cgpa=cgpa;}
    void showDetails(){
        cout<<"This is Student's Details of "<<this->name<<" CGPA: "<<cgpa<<endl;
    }
    void showCgpa(){
    cout<<"CGPA:"<<cgpa<<endl;
    }
};

int main(){


    Student s ("Student-1",3.8);
    Person *p=&s;

    p->showDetails();
    //Careful this is invalid
    //p->showCgpa();
    Student *test = (Student *)p;

    test->showCgpa();

return 0;
}

