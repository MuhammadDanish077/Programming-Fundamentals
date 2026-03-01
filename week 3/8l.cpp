#include<iostream>
using namespace std;
main(){

cout<<"ENTER THE VOLTAGE (in volts):";
float Voltage;
cin>> Voltage;

cout<<"ENTER THE CURRENT (in Amperes):";
float Current;
cin>> Current;

float Power;
Power= Voltage*Current;

cout<<"The power is "<<Power<<" Watts";

}