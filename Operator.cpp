#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int result, op1, op2;

    //===================BINARY OPERATOR=================//
    op1=5;
    op2=7;
    //sum = operand1 + operand2
    result = op1 + op2;

    cout << "Addition : "<< result <<endl;
    cout << "Subtraction : "<< op1 - op2 <<endl;
    cout << "Multiplication : "<< 2 * 3 <<endl;

     /*
        In c++ Division can be Integer division or Real Division
        int / int => int        integer division
        float / int => float    real division
        int / float => float    real division
        float / float => float  real division
    */

    cout << "Integer Division : "<< 2 / 3 <<endl;

    cout << "Real Division : "<< 2.0 / 3 <<endl;
    cout << "Real Division : "<< 2 / 3.0 <<endl;
    cout << "Real Division : "<< 2.0 / 3.0 <<endl;


    cout << "Modulus : "<< 9 % 12 <<endl; //this operator is used to find remainder


    //===================UNARY OPERATOR (-,+,!,++,--, (type)) =================//
    //Example of Sign change
    result = -result;
    cout <<"Sign Change : "<< result<<endl;

    result = +result;
    cout <<"Sign Change : "<< result <<endl;

    //Example of ! Not
    cout<<!true<<endl;

    cout<< 3 +3%3*4/5+2 <<endl; // 5

/*
    int value = 5;
    //Example of ++ increment operator
    cout<< "Pre-Increment "<<++value <<endl;// pre-increment (It increments itself before doing other calculations)

    cout<< "Post-Increment "<<value++ <<endl;// post-increment ((It increments itself after doing other calculations)
    cout<< value <<endl;

    //Example of -- decrement operator
    cout<<"Pre-Decrement"<< --value <<endl;// pre-decrement (It increments itself before doing other calculations)

    cout<<"Post-Decrement"<< value-- <<endl;// post-decrement ((It increments itself after doing other calculations)
    cout<< value <<endl;


    //===== power calculation using math.h library======//

    cout<<"Square calculation : "<< pow(5,2) <<endl;
    cout<<"Cube calculation : "<< pow(5,3) <<endl;
    cout<<"Any power calculation : "<< pow(5,4) <<endl;

    cout<<"Square root calculation : "<< pow(25,1/2.0) <<endl;
    cout<<"Square root calculation : "<< sqrt(25)<<endl;

    cout<<"Cube root calculation : "<< pow(5,1/3.0) <<endl;
    cout<<"Any root calculation : "<< pow(5,1/4.0) <<endl;
*/
return 0;
}
