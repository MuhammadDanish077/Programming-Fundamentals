#include <iostream>
using namespace std;
int main(){
    cout<<"Enter any character in lower case: ";
    char c;
    cin>>c;
    if(c>=0 && c<='9'){
        cout<<"It is a number";}
    else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    cout << "It is a vowel" << endl;
    }
    
        else{cout<<"It is consonant"<<endl;}
   }
   
