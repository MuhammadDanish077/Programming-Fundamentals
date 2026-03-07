#include <iostream>
using namespace std;
main(){
    cout<<"Enter your bill: ";
    float bill;
    cin>>bill;
    if(bill<=5000){
        bill=bill-(bill*(5.0/100));
        cout<<"Your discounted bill is: "<<bill;
    }
    else{bill=bill-(bill*(10.0/100));
    cout<<"your bill is "<<bill;}
}