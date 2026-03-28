#include<iostream>
using namespace std;
int main(){
    char wrd[100];
    int length=0;
    cout<<"Enter a string: ";
    cin>>wrd;
    while(wrd[length] != '\0'){
        length++;
    }
    for(int x = length-1; x>=0; x--)
{
        cout<<wrd[x];
    }
    return 0;
}