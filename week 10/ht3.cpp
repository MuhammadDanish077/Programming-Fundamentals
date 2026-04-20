#include<iostream>
using namespace std;

void priceMoto(int price){

 float taxprice=price*0.06;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF MOTORCYCLE AFTER ADDING TAX IS "<<price<<"";   
}

void priceElectric(int price){
 float taxprice=price*0.08;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF ELECTRIC CAR AFTER ADDING TAX IS "<<price<<"";   
}

void priceSedan(int price){
 float taxprice=price*0.1;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF SEDAN AFTER ADDING TAX IS "<<price<<"";   
}

void priceVan(int price){
 float taxprice=price*0.12;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF VAN AFTER ADDING TAX IS "<<price<<"";   
}

void priceTruck(int price){
 float taxprice=price*0.15;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF TRUCK AFTER ADDING TAX IS "<<price<<"";   
}


int main(){
cout<<"Enter vehicle type(M/E/S/V/T):";
char y;
cin>>y;
cout<<"Enter vehicle price:";
int price;
cin>>price;
if(y=='M'){
priceMoto(price);
}
if(y=='E'){
priceElectric(price);
}
if(y=='S'){
priceSedan(price);
}
if(y=='V'){
priceVan(price);
}
if(y=='T'){
priceTruck(price);
}
}
