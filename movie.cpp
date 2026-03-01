#include <iostream>
using namespace std;

main(){
string movie;
int aduti;
int chiti;
float aduso;
float chiso;
float docha;
cout<<"Enter the movie name: ";
cin>>movie;
cout<<"Enter the adult ticket price: $";
cin>>aduti;
cout<<"Enter the child ticket price: $";
cin>>chiti;
cout<<"Enter the number of adult ticket sold: ";
cin>>aduso;
cout<<"Enter the number of child ticket sold: ";
cin>>chiso;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>docha;
cout<<endl;
cout<<endl;
cout<<"Movie: "<<movie<<" ";
float amount;
amount = (aduti*aduso)+(chiti*chiso);
cout<<"Total amount generated from ticket sales: $"<<amount<<"\n";
float charity;
charity = amount*(docha/100);
cout<<"Donation to charity ("<<docha<<"%): $"<<charity<<endl;
int remain;
remain = amount-charity;
cout<<"Remaining amount after donation: $"<<remain<<" ";

}