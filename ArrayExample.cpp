#include<iostream>
using namespace std;
#define N 5

int main(){

    //int arr[N] = {11,22,33,44};
    int arr[N] = {};

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int sum=0;
    //sum of all data in array
    for(int i=0;i<N;i++){
        sum = sum + arr[i];
    }

    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<(float)sum/N<<endl;

    int maximum=arr[0];
    int minimum=arr[0];
    //Finding Maximum number from array
    for(int i=1;i<N;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    cout<<"Maximum : "<<maximum<<endl;
    cout<<"Minimum : "<<minimum<<endl;

    //sorting array using Bubble

    for(int i=0;i<N;i++){

        for(int j=0;j<N;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }

    //printing array
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Middle Number :"<<arr[N/2]<<endl;


    return 0;
}

