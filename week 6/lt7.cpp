#include<iostream>

using namespace std;
bool check(string word ,char letter)
{
    bool isFound = false;
    for(int x = 0 ; word[x] != '\0' ; x++)
    {
        if (word[x]==letter)
        {
            isFound = true;
            break;
        }
    }
     return isFound;
}
main(){
    string word;
    char letter;
    cout<<"Enter a Word: ";
    cin>> word;
    cout<<"Enter the character you want to find: ";
    cin >>letter;
    
    if(check(word,letter))
    {
        cout<<letter<< " is found in "<<word;
    }
    else
    {
        cout<<letter<<"is not found in "<<word;
    }
}