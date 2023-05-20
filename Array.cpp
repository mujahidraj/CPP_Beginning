#include<iostream>
using namespace std;

int main(){
    int arr[10];

    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[9] = 19;
    int i;
    for(i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"-------------"<<endl;
    int ages[10] = {23,24,25,26,27};
    for(i=0;i<10;i++){
        cout<<ages[i]<<endl;
    }

    cout<<"SIZE of: "<<sizeof(arr)<<endl;

return 0;
}
