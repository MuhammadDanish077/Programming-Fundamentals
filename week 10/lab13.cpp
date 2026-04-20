#include <iostream>
#include <string>
using namespace std;
void eng(int num)
{
    string ones[]={"","one","two","three","four","five","six","seven","eight","nine"};
    string teens[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    if(num<10){
        cout<<ones[num];
    }
    else if(num>=10 && num<20){
        cout<<teens[num-10];
    }else{
        int tensdigit = num/10;
        int onesdigit = num%10;
        cout<<tens[tensdigit]<<ones[onesdigit];
    }
}
int main(){
    int num;
    cout<<"Enter a number (1-99): ";
    cin>>num;
    eng(num);
    return 0;
}