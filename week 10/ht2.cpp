#include <iostream>
#include <iomanip>
using namespace std;
string u;
void volume(float l,float w,float h){
    float v;
    v=l*w*h;
    if(u == "millimeters"){
        v=v*1000000000;
        cout<<v<<" cubic "<<u;
    }
    else if(u == "centimeters"){
        v=v*1000000;
         cout<<v<<" cubic "<<u;
    }
    else if(u == "kilometers"){
        v=v*0.000000001;
         cout<<v<<" cubic "<<u;
    }
    else{
         cout<<v<<" cubic "<<u;
    }
}
int main(){
float l,w,h;
cout<<"Enter length, width, height (in meters): ";
cin>>l>>w>>h;
cout<<"Enter output unit (millimeters, centimeters, meters, kilometers): ";
cin>>u;
volume(l,w,h);
}