#include<iostream>
using namespace std;

main(){

cout<<"Enter paint area: ";
int a;
cin>>a;
cout<<"Enter width: ";
int w;
cin>>w;
cout<<"Enter height: ";
int h;
cin>>h;
int walls;
walls=a/(w*h);
cout<<"Walls painted: "<<walls;

}