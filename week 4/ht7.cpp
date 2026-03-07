#include <iostream>
using namespace std;
int main(){
    float l,w,r,A;
    string shape;
    cin>>shape;
if(shape=="square"){
    cin>>l;
    l=l*l;
    cout<<""<<l<<""<<endl;
}
if(shape=="circle"){
    cin>>r;
    l=3.14159*r*r;
    cout<<""<<l<<""<<endl;
}
if(shape=="rectangle"){
    cin>>l;
    cin>>w;
   A=l*w;
   cout<<""<<A<<""<<endl; 
}
if(shape=="triangle"){
    cin>>l;
    cin>>w;
    A=0.5*l*w;
    cout<<""<<A<<""<<endl;
}
}