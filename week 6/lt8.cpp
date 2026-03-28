#include <iostream>
using namespace std;
main(){
    char word[100];
    cout<<"Enter the word: ";
    cin>>word;
    
    for(int x=0;word[x]!= '\0';x++)
    {
      cout<<word[x]<<" found at the position "<<x <<endl; 
    }

}