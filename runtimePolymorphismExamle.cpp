#include<iostream>
using namespace std;
/*
//abstract class: a class is called abstract class when there are one or
//more pure virtual method/methods
*/
//abstract class
// method overriding
class Person{
protected:
    string name;
public:
    Person(string n){name=n;}
    //pure virtual function
    virtual void showDetails()=0;
};

class Student:public Person{
public:
    Student(string n):Person(n){
    }
    void showDetails(){
    cout<<"Student ShowDetails : "<<name<<endl;
    }

};

int main(){

   // Person p1("P-1");
   // p1.showDetails();

    Student s1("S-1");
    s1.showDetails(); // calling child's version of showDetails
   // s1.Person::showDetails(); // calling parent's version of showDetails

   // ((Person)s1).showDetails();// type casting child object to parent
    //((Student)p1).showDetails();// !! ERROR !! type casting parent object to child is not possible

    Student s2("S-2");
   // Person p2 = s2;
   // p2.showDetails();
    s2.showDetails();

    Person *p3;
    Student s3("S-3");

    p3 = &s3; // according to polymorphic behavior we can keep child class object address to
                // parent class pointer.
    (*p3).showDetails();
    p3->showDetails();

    ((Student*)p3)->showDetails();

return 0;
}
