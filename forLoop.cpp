#include<iostream>
using namespace std;

int main(){

    // for(initialization; condition; update){ body }
    /*
        1. initialization
        2. condition
        3. if condition is true then go to for's body
        4. when for's body is completed control goes to update
        5. after update go to condition
        6. if condition is true go to step 3
        7. if condition is false loop is exited

    */
    int i, N;

    cin>>N;

    for(i=1;i<N; i++){
        if(i%2!=0){
            cout<<i<<" is Odd"<<endl;
        }
    }
return 0;
}
