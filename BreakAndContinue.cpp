#include<iostream>
using namespace std;

int main(){

    int number;
    int i;
    cin>>number;

    for(i=0 ; i<number ;  i = i+1 ){
        if(i==5){
            continue;
        }

        if(i==8){
            break;
        }
        cout<<"Value of i : "<<i<<endl;
    }

return 0;
}
