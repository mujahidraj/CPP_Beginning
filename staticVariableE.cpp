#include<iostream>
using namespace std;

//class className{ };
class Box{
//access modifiers
private:// access is available only within the class
//member
    //Properties/Attributes/Data Members
    //instance member/instance variables
    double length=0;
    double width=0;
    double height=0;

public:// access is available within the class and also from outside of the class

    //Static variable belongs to class and every object shares the same variable
     static int boxCount;// static variable/ class variable

    //Constructor is an special type of method that does not have any return type
    //The name of a constructor is as same as it's class name.
    //Constructor can take any number of parameters
    //Constructor is called automatically at the time of creating object.
    //It is called exactly one time per object at the time of creating that object.
    //The purpose of Constructor is to initialize properties.
    Box(){
        boxCount++;
        cout<<"This is an Empty constructor, Number of Box = "<<boxCount<<endl;
    }
    //Constructor overloading
    Box(double l, double w, double h){
        boxCount++;
        cout<<"This is a Parameterized constructor, Number of Box = "<<boxCount<<endl;
        length = l;
        width = w;
        height = h;
    }

    //Destructor is an special type of method that does not have any return type
    //The name of a Destructor is as same as it's class name but it has a ~ sign before it's name
    //Destructor does not take any parameters
    //Destructor is called automatically at the time of destroying an object.
    //It is called exactly one time per object at the time of destroying the object.
    //The purpose of Destructor is to destroy objects/releasing the memory.
    ~Box(){
        boxCount--;
        cout<<"Object is Destroyed, Number of Box Left = "<<boxCount<<endl;
    }


    //method
    //setter methods
    //instance member
    void setLength(double l){
         if(l>=0){
            length = l;
         }
         else{
            cout<<"Invalid Value"<<endl;
         }
    }
    void setWidth(double w){
         if(w>=0){
            width = w;
         }
         else{
            cout<<"Invalid Value"<<endl;
         }
    }
    void setHeight(double h){
         if(h>=0){
            height = h;
         }
         else{
            cout<<"Invalid Value"<<endl;
         }
    }

    //getter methods
    double getLength(){ return length;}
    double getWidth(){ return width;}
    double getHeight(){ return height;}

    double getArea(){
        return length * width;
    }
    double getVolume(){
        return length * width * height;
    }

    void showDetails(){
        cout<<"Length : "<<length<<endl;
        cout<<"Width : "<<width<<endl;
        cout<<"Height : "<<height<<endl;
    }

     static void showBoxCount(){
        cout<<"Number of Box is : "<< boxCount <<endl;
    }
};

int Box::boxCount = 0;

int main(){


    cout<<"Number of Box is : "<< Box::boxCount <<endl;
    Box::showBoxCount();

    Box b1,b2;

    b1.setLength(10);
    b1.setWidth(7);
    b1.setHeight(-4);
    b1.showDetails();


    b2.setLength(20);
    b2.setWidth(8);
    b2.setHeight(7);
    b2.showDetails();


    b1.setHeight(4);
    b1.showDetails();

    cout<<b1.getLength()<<endl;
    cout<<b1.getWidth()<<endl;
    cout<<b1.getHeight()<<endl;
    cout<<"Area : "<<b1.getArea()<<endl;
    cout<<"Volume : "<<b1.getVolume()<<endl;
    cout<<"Area : "<<b2.getArea()<<endl;
    cout<<"Volume : "<<b2.getVolume()<<endl;

    Box b3(30,7,7);
    cout<<"Area : "<<b3.getArea()<<endl;
    cout<<"Volume : "<<b3.getVolume()<<endl;


    return 0;
}
