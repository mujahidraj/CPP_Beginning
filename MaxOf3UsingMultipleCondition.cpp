#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a >>b >>c;

    if(a>=b && a>=c){
        cout<<a<<" is maximum"<<endl;
    }
    else if(b>=a && b>=c){
        cout<<b<<" is maximum"<<endl;
    }
    else{
        cout<<c<<" is maximum"<<endl;
    }


return 0;
}

