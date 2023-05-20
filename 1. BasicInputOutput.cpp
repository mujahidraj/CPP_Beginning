//# this is know as preprocessor
#include<iostream>
using namespace std;

// Main function is the entry point in C++ program
int main(){
// main function's body.
// we can give output to consol using cout keyword
    cout<<"Hello Class"<<endl; // here endl means end line
    cout<<"Hello Karim"<<endl;

    //Variable declaration
    //dataType variableName
    int age; // int means integer Example: 1, 2 , 4, -70 etc
            //  Integer uses 4bytes of memory
    age = 23;

    cout<<"Age: "<<age<<endl;

//We can take input from user using cin keyword.
    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Your Age is : "<<age;

return 0;
}
