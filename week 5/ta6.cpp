#include<iostream>
using namespace std;
main(){
    int mult=1;
cout<<"Enter a number :";
int num;
cin>>num;
for(int i=1;i<=10;i++)
{
  mult=num;
  mult=mult*i;
  cout<<""<<num<<" * "<<i<<" = "<<mult<<endl;
}
}