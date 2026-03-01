#include<iostream>
using namespace std;

main(){

cout<<"Enter imposters : ";
int i;
cin>>i;
cout<<"Enter players : ";
float p;
cin>>p;
float chance;
chance=100*(i/p);
cout<<"Chance : "<<chance<<"%";

}