#include<iostream>
using namespace std;

main(){

cout<<"Enter imposter count: ";
int i;
cin>>i;
cout<<"Enter player count: ";
float p;
cin>>p;
float chance;
chance=100*(i/p);
cout<<"Chance of being an imposter: "<<chance<<"%";

}