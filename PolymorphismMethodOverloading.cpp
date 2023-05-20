
        #include<iostream>
        using namespace std;
        class Test{
        public:
            void virtual f()=0;
          void sub(int a,int b){
          cout<<"INT SUB:="<<a-b<<endl;
          }
          void sub(float a,float b){
          cout<<"FLOAT SUB:="<<a-b<<endl;
          }
          void sub(double a,double b){
          cout<<"DOUBLE SUB:="<<a-b<<endl;
          }
          void sub(int a,double b){
          cout<<"INT & DOUBLE SUB:="<<a-b<<endl;
          }
        };
        int main(){
            Test t;
            t.sub(9.5,-3.0);

        return 0;
        }

