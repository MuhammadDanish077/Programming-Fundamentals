#include <iostream>
using namespace std;
int main(){
    string b,bb,bbb;
    int a,aa,aaa;
    cout<<"Enter name of first brother: ";
    cin>>b;
    cout<<"Enter age of first brother: ";
    cin>>a;
    cout<<"Enter name of second brother: ";
    cin>>bb;
    cout<<"Enter age of second brother: ";
    cin>>aa;
    cout<<"Enter name of third brother: ";
    cin>>bbb;
    cout<<"Enter age of third brother: ";
    cin>>aaa;
    if(a<aa){
        if(a<aaa)
        cout<<""<<b<<" is yougest" <<endl;}
    else if(aa<a){
        if(aa<aaa)
        cout<<""<<bb<<" is yougest" <<endl;
    }
    else{cout<<""<<bbb<<" is yougest" <<endl;
    }
    
    }