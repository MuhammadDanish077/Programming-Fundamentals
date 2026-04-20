#include <iostream>
using namespace std;
int add(int x, int y){
    return x+y;
}
int main() {
    int a,b,sum;
    a=5; b=6;
    sum=add(a,b);
    cout<<sum;
    return 0;
}