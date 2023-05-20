//# is known as preprocessor
#include<iostream>
using namespace std;

int main(){

//Valid variable Names
//Starts with a..z or A..Z or _
//After that can have any combination of a..z,A..Z,0..9
// A variable cannot be same as keywords
//C++ language is case sensitive
int Age;
int AGE;
int AgE,AGe124;

//int int; variable names cannot be same as keyWords

//DataType VariableName


    int age;    //Integer Data Type: 1, 23, -5 .... etc.
                //Integer uses 4 bytes of memory
    age = 23;   // = this is called assignment operator
                // it assigns value from right to left.
    cout<<age<<endl;
    age = 25;
    cout<<age<<endl;

    float cgpa; //Floating Number (Real Number): 1.67, 2.5, 98.99, -0.5 ..etc
                //Float can remember number up to 7 decimal places.
                //Float uses 4 bytes of memory
    cgpa = 3.90;
    cout<<cgpa<<endl;


    double atomSize; //Double can remember number up to 15 decimal places.
                    //Double uses 8 bytes of memory
    atomSize= 0.0006;
    cout<<atomSize<<endl;


    bool decision;  //Boolean: False/True, 0/1
                    //Boolean uses 1 bytes of memory
    decision = true;
    cout<<decision<<endl;


    char gender;    //Character is used to represent single character: 'A','1',' '
                    //Character uses 1 bytes of memory
    gender = 'M';
    cout<<gender<<endl;

    //Example of ASCII code
    char example;
    example = 65; // here 65 is the ACII code of A character.
    cout<<"Output of Example Character: "<<example<<endl;

    //We can take input from user using cin keyword
    cout<<"Enter your age: ";
    cin>>age;
    cout<<age<<endl;

return 0;
}


