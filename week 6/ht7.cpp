#include<iostream>
using namespace std;
main(){
        string name[10];
        float price[10],qt[10],value[10];
        int num;
        cout<<"Enter the number of products: ";
        cin>>num;
        
        for (int i = 0; i < num; i++)
        {
            
            cout<<"Enter the name of product "<<i+1<<": ";
            cin>>name[i];
            cout<<"Enter the price of "<<name[i]<<": $";
            cin>>price[i];
            cout<<"Enter quantity of "<<name[i]<<": ";
            cin>>qt[i];
            cout<<endl;
            value[i]=price[i]*qt[i];
        }
        cout<<"Product Inventory Report"<<endl;
        cout<<"------------------------"<<endl;
         for (int i = 0; i < num; i++)
        { 
        cout<<name[i]<<": $"<<price[i]<<", "<<qt[i]<<" in stock, Total value: $"<<value[i]<<endl;
        }




}