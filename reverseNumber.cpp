#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a Number to Reverse: ";
    cin>>number;
    int rightDigit,revNumber=0;

    while(number>0){
        rightDigit = number%10;
        revNumber = revNumber*10 + rightDigit;
        number = number/10;
    }
    cout<<endl;
    cout<<"Reverse Number: "<<revNumber<<endl;
return 0;
}
