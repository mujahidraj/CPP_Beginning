#include<iostream>
#define pi2 3.1416
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1, int y1) {
	     x = x1;
	     y = y1;
    }

	// Copy constructor
	Point(const Point &p) {
	    x = p.x * 2;
        y = p.y * 2;
    }

	int getX(){ return x; }
	int getY(){ return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	cout<<p1.getX()<< ","<<p1.getY()<<endl;
	cout<<p2.getX()<< ","<<p2.getY()<<endl;


	//constant declaration in C++
	const double pi = 3.1416;

	cout<<pi<<endl;
	cout<<pi2<<endl;

	return 0;
}
