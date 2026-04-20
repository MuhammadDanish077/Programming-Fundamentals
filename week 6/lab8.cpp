#include <iostream>
using namespace std;

class complex
{public:
    int real, imag;
    complex operator + (complex object){
    complex temp;
    temp.real = real + object.real;
    temp.imag = imag + object.imag;
    return temp;
}
    complex operator - (complex object){
    complex temp;
    temp.real = real - object.real;
    temp.imag = imag - object.imag;
    return temp;
}
    complex operator == (complex object){
    complex temp;
    temp.real = real == object.real;
    temp.imag = imag == object.imag;
    return temp;
}
};
int main () {
    complex c1,c2,c3;
    c1.real=2;
    c1.imag=3;
    c2.real=4;
    c2.imag=5;
    c3=c1+c2;
    cout<<c3.real <<" + " <<c3.imag<<endl;
    c3=c1-c2;
    cout<<c3.real <<" -- " <<c3.imag<<endl;
    c3=c1==c2;
    cout<<c3.real <<" == "<<c3.imag<<endl;
    return 0;
}