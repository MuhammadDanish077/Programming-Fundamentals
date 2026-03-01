#include<iostream>
using namespace std;

main(){

cout<<"Enter a four digit number: ";
int num;
cin>>num;
int a,b,c,d;
a=num%10,num/=10;
b=num%10,num/=10;
c=num%10,num/=10;
d=num%10,num/=10;
int sum;
sum=a+b+c+d;
cout<<"Sum of individual digits: "<<sum ;

}