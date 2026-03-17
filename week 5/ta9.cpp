#include <iostream>
using namespace std;
main(){
 int num,dig,a,count=0;
 cout<<"Enter a number: ";
 cin>>num;
 cout<<"Enter digit to check: ";
 cin>>dig;
 for(int i=num;i>0;i=i/10)
 {
     a=i%10;
     if(a==dig){
        count++;
     }
 }
          cout<<"frequency of your digit is="<<count;
}