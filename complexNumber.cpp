#include<iostream>
using namespace std;
// 5+2i
class Complex {
private:
    int real, imag;
public:
    //Default value used in Constructor
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex obj) {
         Complex res;
         cout<<"Adding"<<endl;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }

    // This is automatically called when '*' is used with
    // between two Complex objects
    Complex operator * (Complex obj) {
         Complex res;
         cout<<"Multiplying"<<endl;
         res.real = (real * obj.real) + (imag*obj.imag * (-1));
         res.imag = (real*obj.imag) + (imag*obj.real);
         return res;
    }

     Complex operator *(int n){

        Complex res;
        res.real = real * n;
        res.imag = imag * n;
    return res;
    }

    void print(){
        //when imaginary part is positive
        if(imag>0){cout << real << "+" << imag<<"i" << endl;}
        //when imaginary part is negative
        else if(imag<0){cout << real<<imag<<"i" << endl;}
        //when imaginary part is 0
        else {cout << real<< endl;}
    }
};

int main()
{
    Complex c1(5, 2), c2(4, -3);

    //5+2i
    c1.print();
    //4-3i
    c2.print();

    Complex c3 = c1 + c2;
    c3.print();

    // real = real1 * real2 + img1 * img2 * (-1);
    // img = real1 * img1 + real2 * img1;
    // c1 * c2 = (5+2i) * (4-3i)
    //real = 20 + 6
    //img =  -15i + 8i = -7i
    //c1*c2 = 26-7i

    Complex c4 = c3 + c1 * c2;

    c4.print();

}
