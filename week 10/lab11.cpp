#include <iostream>
using namespace std;
void add(int num[]){
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=num[i];
        cout<<sum<<endl;
    }
    if (sum%2==0)
    {
       cout<<"Evenish" ;
    }
    else
    cout<<"Oddish";
    return;
}
int main() {
    int sum[5];
    cout<<"Enter the number :";
    cin>>sum[0]>>sum[1]>>sum[2]>>sum[3]>>sum[4];
    add(sum);
   
    return 0;
}