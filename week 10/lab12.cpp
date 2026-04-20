#include <iostream>
using namespace std;
void timeTravel(int hour,int min){
    min+=15;
    if(min>=60){
        min-=60;
        hour+=1;
    }if(hour>=24){
        hour=0;
    }
    if(hour<10){cout<<"0";
        cout<<hour<<":";}
        else cout<<hour<<":";
    if(min<10){cout<<"0";
        cout<<min<<endl;}
        else  cout<<min<<endl;
}
int main(){
int h,m;
cout<<"Enter hours : ";
cin>>h;
cout<<"Enter minutes : ";
cin>>m;
timeTravel(h,m);
return 0;

}