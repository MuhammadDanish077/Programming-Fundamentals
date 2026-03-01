#include<iostream>
using namespace std;

main(){

cout<<"Number of square meters you can paint: ";
int a;
cin>>a;
cout<<"Width of single wall (in meters): ";
int w;
cin>>w;
cout<<"Height of single wall (in meters): ";
int h;
cin>>h;
int walls;
walls=a/(w*h);
cout<<"Number of walls you can paint: "<<walls;

}