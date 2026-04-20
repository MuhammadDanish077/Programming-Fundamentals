#include <iostream>
using namespace std;
bool sym(char num[]){
    if(num[0]==num[2]){
        return true;
    }else{
        return false;
    }

}
int main(){
    char num[3];
    cout <<"Enter the numbers : ";
    cin>>num[0]>>num[1]>>num[2];
    if(sym(num)){
        cout<<"yes number is symmetrical";

    }else{
        cout<<"Tne number is unsymmetrical";
    }
}