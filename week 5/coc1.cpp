#include<iostream>
using namespace std;
main(){

 int a , b , c;
 cout<<"Enter the first number:";
 cin>>a;
 cout<<"Enter the second number:";
 cin>>b;
for(int i=1; i<=a && i<=b ;i++ )
{
   if(a%i==0 && b%i==0)
   c=i;}
    cout<<"GCD of "<<a<<" and "<<b<<" is= "<<c<<""<<endl;
int lcm= (a*b) / c;
    cout<<"LCM of "<<a<<" and "<<b<<" is = "<<lcm<<"";

}