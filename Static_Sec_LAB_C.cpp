#include<iostream>
using namespace std;

//class ClassName { };
class Student{
//access modifiers
//public properties can be accessed within the class or outside the class
//private properties can be accessed within the class but not from the outside.
private:
    //instance variables
    string name;
    string id;
    int age;
    float cgpa;

public:
    //class variable
    //static keyword is used to declare static variable/class variable
    static int studentCount;

    static void studentClassInfo(){
        cout<<"This is student class"<<endl;
        cout<<"Number of total Student = "<<studentCount<<endl;
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
        cout<<"Empty Student Constructor, Student Count = "<<studentCount<<endl;
    }
    //creating parameterized Constructor using Constructor overloading

    Student(string n, string i, int a, float cg){
        name = n;
        id = i;
        age = a;
        cgpa = cg;
        studentCount++;
        cout<<"Parameterized Student Constructor, Student Count = "<<studentCount<<endl;
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
        studentCount--;
        cout<<"Destructor is called for , Student Left = "<<studentCount<<endl;;
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

    void cmpCgpa(Student s){
        if(cgpa >s.getCgpa()){
            cout<< name <<" is better"<<endl;
        }
        else{
            cout<< s.getName() <<" is better"<<endl;
        }
    }

    /*
    Student transfer(float c,Student s){
        cgpa = cgpa - c;
        s.setCgpa(s.getCgpa()+c);
        cout<<"After Transfer"<<s.getCgpa()<<endl;

        return s;
    }
    */

    void showStudentInfo(){
        cout<<name <<endl;
        cout<<id <<endl;
        cout<<age <<endl;
        cout<<cgpa <<endl;
    }
};

int Student::studentCount = 0;

int main(){

    Student::studentClassInfo();


    cout<<"Student Count = "<<Student::studentCount<<endl;
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

   // s1.cmpCgpa(s2);


    Student s3("Abdul","20-XXXX3-1",21,3.5);
    s3.showStudentInfo();

    s3.setCgpa(3.6);
    s3.showStudentInfo();

    cout<<"Student Count = "<<Student::studentCount<<endl;
    cout<<"Student Count = "<<s1.studentCount<<endl;
    cout<<"Student Count = "<<s2.studentCount<<endl;
    cout<<"Student Count = "<<s3.studentCount<<endl;


    //s1.cmpCgpa(s3);

    //s2 = s1.transfer(.5,s2);

    //s1.showStudentInfo();
    //s2.showStudentInfo();
    return 0;


}
