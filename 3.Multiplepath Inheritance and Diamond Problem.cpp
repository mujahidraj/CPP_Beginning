#include<iostream>
using namespace std;
class Person {
// Data members of person
private:
    string name;
public:
	Person(int x) { cout << "Person  Constructor is called passed value="<<x << endl; }
	~Person(){
        cout<<"P-D"<<endl;
	}
	void showPerson(){
       cout<<"This is Person Class"<<endl;
	}
};

class Faculty : public Person {
// data members of Faculty
public:
	Faculty(int x):Person(x) {
	cout<<"Faculty  Constructor is called passed value="<<x<< endl;
	}
	~Faculty(){
        cout<<"F-D"<<endl;
	}
};

class Student : public Person {
// data members of Student
public:
	Student(int x):Person(x) {
		cout<<"Student  Constructor is called passed value="<<x<< endl;
	}
	~Student(){
	cout<<"S-D"<<endl;
	}
};

class TA : public Faculty, public Student {
public:
	TA(int x):Student(x), Faculty(x) {
		cout<<"TA  Constructor is called passed value="<<x<< endl;
	}
	~TA(){
	cout<<"TA-D"<<endl;
	}
};

int main() {
	TA ta1(4);
	//ta1.showPerson();

	return 0;
}
