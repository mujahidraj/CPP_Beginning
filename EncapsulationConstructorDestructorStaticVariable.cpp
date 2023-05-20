#include<iostream>
using namespace std;

//class ClassName { };
class Student{
//access modifiers
//public properties can be accessed within the class or outside the class
//private properties can be accessed within the class but not from the outside.
private:
    //properties/data members/instance variables
    string name;
    string id;
    int age;
    float cgpa;

public:
    //class variables/class members
    static int studentCount;
    static int getStudentCount(){
        return studentCount;
    }

    //Constructor
    //Constructor is a special type of method
    //Constructor does not have any return type
    //Name of a constructor is as same as class name
    //Constructor can take any numbers of parameters
    //Constructor is called automatically at the time of object creation
    //Constructor is called exactly one time for an object.

    //Empty Constructor
    Student(){
        name = "";
        id = "";
        age = 0;
        cgpa = 0;
        studentCount++;
        cout<<"Empty Student Constructor"<<endl;
    }
    //creating parameterized Constructor using Constructor overloading

    Student(string n, string i, int a, float cg){
        name = n;
        id = i;
        age = a;
        cgpa = cg;
        studentCount++;
        cout<<"Parameterized Student Constructor"<< name <<endl;
    }

    //Destructor
    //Destructor is a special type of method
    //Destructor does not have any return type
    //Destructor has a ~ sign before it's name
    //Name of a Destructor is as same as class name
    //Destructor can not take any parameters
    //Destructor is called automatically at the time of object deletion/destroy
    //Destructor is called exactly one time for an object.
    ~Student(){
        cout<<"Destructor is called for "<< name <<endl;
        studentCount--;
        cout<<"Number of Student left : "<< studentCount <<endl;
    }


    //setter methods
    void setName(string n){
        name = n;
    }

    void setId(string i){
        id = i;
    }

    void setAge(int a){
        age = a;
    }

    void setCgpa(float cg){
        //filtering the valid cgpa
        if(cg>=0 && cg<=4 ){
            cgpa = cg;
        }
        else{
            cout<<cg <<" is a Invalid CGPA value"<<endl;
        }
    }

    // getter methods
    string getName(){ return name;}
    string getId(){ return id;}
    int getAge(){ return age;}
    float getCgpa(){ return cgpa;}

    void showStudentInfo(){
        cout<<"Name :"<< name <<endl;
        cout<<"ID :"<<id <<endl;
        cout<<"Age :"<<age <<endl;
        cout<<"Cgpa :"<<cgpa <<endl;
    }
};

//initializing Class variable/static variable
int Student::studentCount = 0;


int main(){

    Student s1, s2;
    s1.setName("Kabir");
    s1.setId("20-XXXXX-1");
    s1.setAge(21);
    s1.setCgpa(3.75);

    s1.showStudentInfo();

    s2.setName("Kamal");
    s2.setId("20-XXXX2-1");
    s2.setAge(22);
    s2.setCgpa(2.70);

    s2.showStudentInfo();


    Student s3("Abdul","20-XXXX3-1",21,3.5);
    s3.showStudentInfo();

    //cout<<"Total Student : "<<Student::studentCount<<endl;
    cout<<"Total Student : "<<Student::getStudentCount()<<endl;


    return 0;
}
