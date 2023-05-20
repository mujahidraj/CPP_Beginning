#include<iostream>
#include<math.h>
using namespace std;

int main () {
    float value1, value2;
    char op;
    cout<<"Type in your expression"<<endl;

    cin>>value1>>op>>value2;

    if(op == '+'){
        cout<<"ADDITION : " <<value1+value2<<endl;
    }
    else if(op == '-'){
        cout<<"SUBTRACTION : " <<value1-value2<<endl;
    }
    else if(op == '*'){
        cout<<"MULTIPLICATION : " <<value1*value2<<endl;
    }
    else if(op == '/'){
        cout<<"DIVISION : " <<value1/value2<<endl;
    }
    else if(op == '%'){
        cout<<"MOD : " <<(int)value1%(int)value2<<endl;
    }
    else if(op == '^'){
        cout<<"POWER CALCULTION : " <<pow(value1,value2)<<endl;
    }
    else{
        cout<<"Invalid operator"<<endl;
    }

return 0;
}


