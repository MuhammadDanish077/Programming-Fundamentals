#include <iostream>
using namespace std;

main(){

cout<<"Enter the size of the fertilizer bag in pounds: ";
int size;
cin>>size;
cout<<"Enter the cost of the bag: $";
float bag;
cin>>bag;
cout<<"Enter the area in square feet that can be cvered by the bag: ";
int area;
cin>>area;
float costpound;
costpound=bag/size;
cout<<"Cost of the fertilizer per pound: $"<<costpound<<"\n";
float costfoot;
costfoot=bag/area;
cout<<" Cost of fertilizing per square feet: $"<<costfoot<<"";

}