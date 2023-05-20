#include<iostream>
using namespace std;
/*
//abstract class: a class is called abstract when there are one or
//more pure virtual method/methods
*/
class Person{
protected:
    string name;
public:
    Person(string name){this->name=name;}

    void showDetails(){
    cout<<"Person ShowDetails : "<<name<<endl;
    }
};

class Student:public Person{
public:
    Student(string name):Person(name){
    }

    void showDetails(){
    cout<<"Student ShowDetails : "<<name<<endl;
    }
};

int main(){
    Student s("Student-1");

    s.Person::showDetails();
    s.showDetails();
    ((Person)s).showDetails();


/*
    Person *p;
    p = &s;

    (*p).showDetails();
    p->showDetails();
*/

return 0;
}
