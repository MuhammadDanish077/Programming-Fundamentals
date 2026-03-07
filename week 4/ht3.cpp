#include <iostream>
using namespace std;
int main(){
    cout<<"Temperature City 1: ";
    int c1;
    cin>>c1;
    cout<<"Temperature City 2: ";
    int c2;
    cin>>c2;
    int diff;
    diff=c1-c2;
    if(diff>=10){
        cout<<"Difference is too Big \n";

    }
    cout<<"Program Ends ";
}