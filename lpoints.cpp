#include <iostream>
using namespace std;

main(){

int wins;
int draws;
int losses;
cout<<"Enter the number of wins: ";
cin>>wins;
cout<<"Enter the number of draws: ";
cin>>draws;
cout<<"Enter the number of losses: ";
cin>>losses;
float points;
points=3*wins+draws*1+losses*0;
cout<<"Pakistan has obtained "<<points<<" in Asia cup tournament";

}