#include <iostream>
using namespace std;

class Box {
private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
public:
    //static member
    static int boxCount;
    // Constructor definition
    Box(double l = 1.0, double b = 1.0, double h = 1.0) {
     cout <<"Constructor called." << endl;
     length = l;
     breadth = b;
     height = h;
     // Increase every time object is created
     boxCount++;
    }
    double volume();//method signature
    //static method
    static int getBoxCount(){
        return boxCount;
        }
};

// Initialize static member of class Box
int Box::boxCount = 0;
//completing method outside class
double Box::volume(){
     return length * breadth * height;
}

int main(void) {
   Box box1(3.3, 1.2, 1.5);    // Declare box1
   Box box2(8.5, 6.0, 2.0);    // Declare box2
   Box b2();
   // Print total number of objects.
   cout << "Total objects: " << Box::boxCount << endl;
   // Print total number of Methods
   cout << "Total objects: " << Box::getBoxCount() << endl;
   cout<<box1.volume()<<endl;

   return 0;
}
