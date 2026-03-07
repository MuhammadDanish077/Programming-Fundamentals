#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"Country: ";
    cin>>name;
    float price;
    cout<<"Ticket price: ";
    cin>>price;
    if(name=="Ireland"){
    price=price-(price*0.1);
    cout<<"Discounted Price: "<<price;
    }
    else{price=price-(price*0.05);
    cout<<"Discounted Price: "<<price;
}
}