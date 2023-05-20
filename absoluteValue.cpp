#include<iostream>
using namespace std;

int main ()
{
    int number;

    cout<<"Enter a number : ";
    cin>>number;

    //if(logical expressions){ body }

    if(number<0){
        cout<<"inside if's body"<<endl;
        number = -number;
    }

    cout<<"Absolute Value : "<< number<<endl;

return 0;
}
