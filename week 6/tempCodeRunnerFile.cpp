#include<iostream>
using namespace std;
 main()
{
    int n,;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers:"<<endl;
    int clo[n];
    for (int i = 0; i < n; i++)
    {
       cin>>clo[i];}
       int largest=[0];
       int smallest=[0];
       if(clo[i]>largest){
        cout<<"Largest number: "<<clo[i];
       }else{cout<<"Largest number: "<<largest;}
       if(clo[i]<smallest)
    {
        cout<<"Smallest number: "<<clo[i];
    }else{cout<<"Smallest number: "<<smallest;}

}