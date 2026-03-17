#include <iostream>
using namespace std;
int main (){
cout<<"Enter number: ";
int n; int count=0;
cin>>n;
cout<<"Enter digit: ";
int d;
cin>>d;
for(int i=0; i<n; i++){
if(n%10==d){
count=count+1;}
n=n/10;
}
cout<<"Frequency of "<<d<<" in "<<n<<" is : "<<count;
}