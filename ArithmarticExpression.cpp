#include<iostream>
#include<math.h>
using namespace std;

int main(){

    /*

        * , / , % have same precedence's
        +, - have same precedence's
        if operator have same priority then we have to check
            from left to right
    */
   int x;
    x =  3 * 4 / 2 + 3 - 1 ;
    cout << x <<endl;

    cout << 6 + 2 * 3 - 4 / 2<<endl;

    cout << 20 / 3 + 5 % 2<<endl;


    cout << 3 * (2 / 4.0) + (3-1)<<endl;
    cout << (6 + 2) * ((3 - 4) / 2)<<endl;
    cout << 20/(3+5) % 2 <<endl;



    //Quadratic Equation Solving using C++
    float a,b,c;
    cout<<"Provide a,b,c inputs for quadratic Equation: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    float x1,x2;
    x1 = (-b+pow( pow(b,2) - 4*a*c ,1/2.0)) / (2*a);
    x2 = (-b-pow( pow(b,2) - 4*a*c ,1/2.0)) / (2*a);

    cout<<"X1 = "<< x1 <<endl;
    cout<<"X2 = "<< x2 <<endl;

    //Try to calculate the value by yourself.
    int p=1, q =2, r = 3;
    cout << p++ * ++q % ++r <<endl;

return 0;
}
