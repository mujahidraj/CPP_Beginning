#include<iostream>
using namespace std;
class Person {
// Data members of person
public:
	Person(int x) { cout << "Person Constructor called" << endl; }
	void showPerson(){
        cout<<"This is Person Class"<<endl;
	}
};

class Faculty : virtual public Person {
// data members of Faculty
public:
	Faculty(int x):Person(x) {
	cout<<"Faculty Constructor called"<< endl;
	}
};

class Student : virtual public Person {
// data members of Student
public:
	Student(int x):Person(x) {
		cout<<"Student Constructor called"<< endl;
	}
};

class TA : public Student,public Faculty  {
public:
	TA(int x):Student(x),Faculty(x),Person(x){
		cout<<"TA Constructor called"<< endl;
	}
};

int main() {
	TA ta1(4);
	ta1.showPerson();
}
