#include<iostream>
using namespace std;
class Teacher{
public:
    Teacher(){
        cout<< "Teacher Constructor"<<endl;
    }
};

class Student{
public:
    Student(){
        cout<< "Student Constructor"<<endl;
    }
};
//Multiple Inheritance
class TA: public Student, public Teacher{
public:
    TA():Teacher(),Student(){
        cout<< "TA Constructor"<<endl;
    }
};

int main(){
    TA a;
return 0;
}

