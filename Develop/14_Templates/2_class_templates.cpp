#include<bits/stdc++.h>
using namespace std;

// template for class;
template <class T>
class calculator{
    private:
        T num1 , num2;
    public:
        calculator(T a, T b){
            num1 = a;
            num2 = b;
        }
        void display(){
            cout<<"The values are "<< num1 <<" and " <<num2<<endl;
            cout<<"Addition is : "<<add()<<endl;
            cout<<"Subtraction is : "<<subtraction()<<endl;
            cout<<"Product is : "<<multiply()<<endl;
            cout<<"Division is : "<<division()<<endl;
        }
        T add(){
            return num1 + num2;
        }
        T subtraction(){
            return num1 - num2;
        }
        T multiply(){
            return num1 * num2;
        }
        T division(){
            return num1 / num2;
        }
};

int main(){
calculator<int> intcal(2,1);
calculator<float> floatcal(2.3,2.4);
cout<<"integer value Results : "<<endl;
intcal.display();


cout<<"Float value Results"<<endl;
floatcal.display();
return 0;
}