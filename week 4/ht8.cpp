#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number (1 to 100): ";
    cin>>n;
    if(n==100){
        cout<<"One Hundred"<<endl;
    }
    else if(n==0){
        cout<<"Zero"<<endl;
    }
    else if (n>=11 && n<=19){
        if(n==11) cout<<"Eleven"<<endl;
        else if (n == 12) cout << "Twelve" << endl;
        else if (n == 13) cout << "Thirteen" << endl;
        else if (n == 14) cout << "Fourteen" << endl;
        else if (n == 15) cout << "Fifteen" << endl;
        else if (n == 16) cout << "Sixteen" << endl;
        else if (n == 17) cout << "Seventeen" << endl;
        else if (n == 18) cout << "Eighteen" << endl;
        else if (n == 19) cout << "Nineteen" << endl;
    }else{
        int tens= n/10;
        int ones=n%10;
        if(tens==1) cout<<"Ten";
        else if (tens==2) cout<<"Twenty ";
        else if (tens==3) cout<<"thirty ";
        else if(tens==4) cout<<"Forty ";
        else if(tens==5) cout<<"Fifty ";
        else if(tens==6) cout<<"Sixty ";
        else if (tens==7) cout<<"Seventy ";
        else if(tens==8) cout<<"Eighty ";
        else if(tens== 9) cout<<"Ninety ";
     

    if (ones==1) cout<<"one";
        else if (ones==2) cout<< "Two";
        else if (ones==3) cout<< "Three";
        else if (ones==4) cout<< "Four";
        else if (ones==5) cout<< "Five";
        else if (ones==6) cout<< "Six";
        else if (ones==7) cout<< "Seven";
        else if (ones==8) cout<< "Eight";
        else if (ones==9) cout<< "Nine";
    }
}






     
