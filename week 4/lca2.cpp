#include <iostream>
using namespace std;
main(){
    float salary,price,percent,duration;
    salary=10000;
    price=50000;
    percent=salary*0.5*6;
    if(percent>=price){
        cout<<"You can buy laptop";
    }
    else{
        duration=price/5000;
        cout<<"Months required to buy laptop: "<<duration ;
    }
    }
     