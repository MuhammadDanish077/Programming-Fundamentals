#include <iostream>
using namespace std;
main(){
    int num;
   float p1=0,p2=0,p3=0,p4=0,p5=0,line;
   cout<<"Enter number count:";
   cin>>line;
    for(int i=1;i<=line;i++)
    {
     cout<<"Enter a number:";
      cin>>num;
      if(num<200){
         p1=p1+1;
      }
      else if(num>=200 && num<=399){
        p2=p2+1;
      }
      else if(num>=400  && num<=599){
        p3++;
      }
      else if(num>=600 &&num<=799){
        p4++;
      }
      else if(num>=800){
        p5++;
      }
    }
       cout<<""<<(p1*100)/line<<"%"<<endl;
       cout<<""<<(p2*100)/line<<"%"<<endl;
       cout<<""<<(p3*100)/line<<"%"<<endl;
       cout<<""<<(p4*100)/line<<"%"<<endl;
       cout<<""<<(p5*100)/line<<"%"<<endl;
       
}