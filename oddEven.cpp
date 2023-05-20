#include<iostream>
using namespace std;

int main ()
{
    int number_to_test, remainder;

    cout<<"Enter your number to be tested: ";

    cin>>number_to_test;

    if(number_to_test>0){

        if(number_to_test%2 == 0){
            cout<<"It is an Even Number"<<endl;
        }
        else{
            cout<<"It is an Odd Number"<<endl;
        }
    }
    else {
        cout<<"You have entered a Negative number"<<endl;
    }


return 0;
}

