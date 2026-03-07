#include <iostream>
using namespace std;
int main(){
    cout<<"Red Rose: ";
    float red;
    cin>>red;
    cout<<"White Rose: ";
    float white;
    cin>>white;
    cout<<"Tulips: ";
    float tul;
    cin>>tul;
    float total;
    total=(red*2.0)+(white*4.10)+(tul*2.50);
    cout<<"Original Price: "<<total<<endl;
    float dis;
    if(total>=200){
        dis=total-(total*0.2);
        cout<<"Price after Discount: "<<dis;}
    }