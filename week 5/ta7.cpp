#include<iostream>
using namespace std;
main(){
    int n1=0,n2=1,n3;
cout<<"Enter the length of fibonacci series: ";
int fib;
cin>>fib;
cout<<n1;
cout<<","<<n2;
for(int i=1;i<fib-1;i++)
{
  n3=n1+n2;
  cout<<","<<n3<<"";
   n1=n2;
   n2=n3;
}
}