#include<iostream>
using namespace std;
class complex{
    public:
int real;
int imag;
};
int main(){
    complex num1;
    complex num2;
    complex sum;
    cin>>num1.real;
    cin>>num1.imag;
    cin>>num2.real;
    cin>>num2.imag;
    sum.real=num1.real+num2.real;
    sum.imag=num1.imag+num2.imag;
    cout<< sum.real<<"+"<<sum.imag<<"i";
return 0;

    

}
