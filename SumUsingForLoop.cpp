//Triangular Number
// 1 + 2 + 3 +4 + ......+ N = ?

#include<iostream>
using namespace std;

int main(){

    int number;
    int i;
    cin>>number;
    int sum=0;

    for(i=1 ; i<=number ;  i = i+1 ){

        sum = sum + i;

    }

    cout<<"Sum : "<<sum<<endl;

return 0;
}
