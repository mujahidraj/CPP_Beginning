#include<iostream>

using namespace std;
#include "mylibrary.h"
int main(){
/*
    cout<<addition(2.5,6.7,3.9)+addition(2.5,1.7,2.9)<<endl;
    cout<<factorial(5)+factorial(3)<<endl;
    cout<<factorial(factorial(3))<<endl;
    cout<<addition(factorial(2),factorial(3),factorial(4));
    int x=20;
    print(x);
    cout<<x<<endl;


    int a=10,b=20;
    swapValue(&a,&b);
    swapValue(&a,&b);
    cout<<a<<"   "<<b<<endl;
*/

    int arr[5] = {33,12,45,25,20};
    int arr1[7] = {33,12,55,25,20,29,14};

    printArray(arr,5);
    cout<<findMax(arr,5)<<endl;

    printArray(arr1,7);
    cout<<findMax(arr1,7)<<endl;

    cout<<addition(5)<<endl;
    cout<<addition(5,6)<<endl;
    cout<<addition(5,6,7)<<endl;

    printArray(arr,5);
    printArray(arr1,7);

return 0;
}
