#include <iostream>
using namespace std;
main(){
   int num,a,count=0;
   cout<<"Enter a number: " ;
   cin>>num;
   for(int i=num;i>0;i=i/10)
   {
      a=i%10;
      count=count+a;
   }
   cout<<"Sum of digits ="<<count;
}