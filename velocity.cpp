#include <iostream>
using namespace std;

main(){

cout<<"Enter initial velocity (m/s): ";
int velocity;
cin>>velocity;
cout<<"Enter acceleration (m/s^2): ";
float acc;
cin>>acc;
cout<<"Enter time (s): ";
float time;
cin>>time;
float final;
final=(acc*time)+velocity;
cout<<"Final velocity (m/s): "<<final<<"";

}