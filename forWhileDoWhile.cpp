#include<iostream>
using namespace std;

int main(){
    int i;
    //for Loop, also know as counting Loop
    /for(initialization; condition; update){}
    for(i=0;i<10;i++){
        cout<<i<<" ";
    }

    cout<<endl;

    //while Loop, also know as conditional Loop
    //while(condition){body}
    i=0;
    while(i<10){
        cout<<i<<" ";
        i++;
    }

    cout<<endl;

    //do{body}while();
    i=10;
    do{
        cout<<i<<" ";
        i++;
    }while(i<10);

    //Doing an specific task based on users choice, using do while
    int number;
    char option;
    do{
        cout<<"Enter a Number to Check Even/Odd = ";
        cin>>number;
        if(number%2 == 0){
            cout<<number<<" is Even"<<endl;
        }
        else{
            cout<<number<<" is Odd"<<endl;
        }
        cout<<"Do you want to Try Again? Y/N: ";
        cin>>option;
    }while(option == 'Y' || option=='y');


    //Doing an specific task based on users choice, using while
    int number1;
    char option1='Y';

    while(option1 == 'Y' || option1=='y'){
        cout<<"Enter a Number to Check Even/Odd = ";
        cin>>number1;
        if(number1 %2 == 0){
            cout<<number1<<" is Even"<<endl;
        }
        else{
            cout<<number1<<" is Odd"<<endl;
        }
        cout<<"Do you want to Try Again? Y/N: ";
        cin>>option1;
    }
return 0;
}








