#include <iostream>
using namespace std;
int main(){
    string password;
     password="yes1234";
    cout<<"Enter the password: ";
    string pass;
    cin>>pass;
    if(pass==password){
        cout<<"Wow ! You cracked the code ;)";
    }
    else{cout<<"It's not that simple bro, Try Again";}
}