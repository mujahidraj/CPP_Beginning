#include<iostream>
using namespace std;

int main(){

 //DataType VariableName
    int age; //int means integer
           //0,1,2,-5,-99,-555,34 etc
           //integer allocates 4 bytes of memory

    float cgpa;//float means numeric values with decimal points
           //0.0,1.5,2.6,-5.0,-99.99,-555.5,34.0 etc
           //float allocates 4 bytes of memory
           //float can keep numbers till 7 decimal places

    double atomSize;//double means numeric values with decimal points
           //0.0,1.5,2.6,-5.0,-99.99,-555.5,34.0 etc
           //double allocates 8 bytes of memory
           //double can keep numbers till 15 decimal places

    bool decision;//bool means boolean
           //true,false,1,0
           //bool allocates 1 byte of memory

    char gender;//char means character
           //'A', 'e','2',' ','@' etc
           //ASCII character allocates 1 bytes of memory
/*
    A Valid variable Starts with a..z or A..Z or _
    After that it can have any combination of a..z, A..Z, _, 0..9
    A variable cannot be same as keywords
    C++ language is case sensitive. So age, Age,AGE, age1 ,aGE1 are all different from each other.
*/

    age = 23;// = means assign operator
            // it assigns values from right side to left side
            // assigning value in the variable for the first time is called initialization

    cgpa = 3.14;
    atomSize = 0.6667;
    decision = true;
    gender = 'M';

    cout<<"DIFFERENT TYPES OF VARIABLE and DATA TYPE"<<endl;

    cout<<"Integer : "<< age <<endl;
    cout<<"Float : "<< cgpa <<endl;
    cout<<"Double : "<< atomSize <<endl;
    cout<<"Boolean : "<< decision <<endl;
    cout<<"Character : "<< gender <<endl;

    char character;
    character = 65;
    cout<<character<<endl;

return 0;
}
