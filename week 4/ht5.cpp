 #include <iostream>
using namespace std;
int main(){
    cout<<"Holidays: ";
    int hol,diff,norm=30000;
    cin>>hol;
    int wod,game,hours,mins;
    wod=365-hol;
    game=wod*63+hol*127;
    
    if(game>norm){
        diff=game-norm;
        hours=diff/60;
        mins= diff%60;
        cout<<"Tom will run away."<<endl;
        cout<<""<<hours<<" hours and "<<mins<<" minutes for play"<<endl;
    }
    else{
        diff=norm-game;
        hours=diff/60;
        mins=diff%60;
        cout<<"Tom sleeps well."<<endl;
        cout<<""<<hours<<" hours and "<<mins<<" minutes less for play"<<endl;
    }

    }
