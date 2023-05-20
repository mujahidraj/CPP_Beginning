#include<iostream>
using namespace std;

int main ()
{

    char option;
    cout<<"Enter an option : ";
    cin>>option;

    //switch(option){body}

    switch(option){
    case 'A':
        cout<<"You have Selected Case 1"<<endl;
        break;
    case 66:
        cout<<"You have Selected Case 2"<<endl;
        break;
    case 'C':
        cout<<"You have Selected Case 3"<<endl;
        break;
    default:
        cout<<"You have entered invalid option"<<endl;
    }


return 0;
}

