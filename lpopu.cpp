#include <iostream>
using namespace std;

main(){
cout<<"Enter the world population: ";
int popu;
cin>>popu;
cout<<"Enter the monthly birth rate (nummber of births per month): ";
int rate;
cin>>rate;
float population;
population=popu+(rate*360);
cout<<"Population in three decades will be: "<<population;

}