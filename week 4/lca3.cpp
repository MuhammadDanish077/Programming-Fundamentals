#include <iostream>
using namespace std;
int main(){
    char op;
    cout<<"Welcome to the calculator"<<endl;
    cout<<"Enter the first number: ";
    float n1,n2,n3;
    cin>>n1;
    cout<<"Enter the operator: ";
    cin>>op;
    cout<<"Enter the second number: ";
    cin>>n2;
     if(op=='+'){
        n3=n1-n2;
        cout<<""<<n1<<"-"<<n2<<"="<<n3;
     }
     if(op=='-'){
       n3=n1+n2;
    cout<<""<<n1<<"+"<<n2<<"="<<n3;
     }
     if(op=='*'){
        n3=n1/n2;
    cout<<""<<n1<<"/"<<n2<<"="<<n3;}
    if(op=='/'){
       n3= n1*n2;
    cout<<""<<n1<<"*"<<n2<<"="<<n3;

    }

     }