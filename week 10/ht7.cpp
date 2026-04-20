#include <iostream>
#include <iomanip>
using namespace std;
void calbalance(float balance,int years){
float interest = 0.0,update=0.0;
if(balance<10000){
    interest=balance*0.05;
    interest=interest+balance;
}
else if(balance>=10000 && balance<=50000){
     interest=balance*0.07;
    interest=interest+balance;
}
else{
    interest=balance*0.10;
    interest=interest+balance;
}
if(years>=3){
    interest=interest*0.02;

    cout<<"Updated Balance: "<<update;
}
}
int main(){
    float balance;
    int years;
    cout<<"Enter balance and years: ";
    cin>>balance>>years;
    calbalance(balance,years);
}