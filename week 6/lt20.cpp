#include <iostream>
using namespace std;
int main()
{  
  int n; cin>>n;
  string no[n];
  
  for (int i=0; i<n; i++){
    cin>>no[i];
    char l = no[i][no[i].length() - 1];
    if(l != '7'){
      no[i]+="7";
    } 
  }  
  for (int i=0; i<n; i++){
  cout<< no[i]<< endl;
}}