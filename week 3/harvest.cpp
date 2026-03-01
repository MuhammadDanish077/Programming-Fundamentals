#include <iostream>
using namespace std;

main(){

float vege;
float fruit;
int kivege;
int kifruit;
cout<<"Enter vegetable price per kilograms (in coins): ";
cin>>vege;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruit;
cout<<"Enter total kilograms of vegetables: ";
cin>>kivege;
cout<<"Enter total kilograms of fruit: ";
cin>>kifruit;
float total;
total=(vege*kivege)+(fruit*kifruit);
float fotal;
fotal=total/1.94;
cout<<"Total earning in Rupees (Rps): "<<fotal<<endl;

}