// 1^2 + 3^2 + 5^2 +....+ N^2 = ? // here N is odd
#include<iostream>
using namespace std;

int main(){
    int n, triNum=0,N;
    cout<<"Provide the value of N for Nth Triangular Number: ";
    cin>>N;
    for(n=1;n<=N;n+=2){

        triNum = triNum + n*n;
        cout<<triNum<<" ";

    }

    //cout<<N<<"th triangular number = "<<triNum<<endl;

return 0;
}

