#include <iostream>
using namespace std;
int main(){
   char wrd[100];
   cout<<"Enter a string: ";
   cin>>wrd;
   cout<<"Shifted string: ";
   for(int i = 0; wrd[i] != '\0'; i++)
   {
    if (wrd[i]== 'z'){
        wrd[i]='a';
    }
    else if (wrd[i]== 'Z'){
        wrd[i]='A';
    }
    else{
        wrd[i]=wrd[i] + 1;
    }
    cout<< wrd[i];
   }


}