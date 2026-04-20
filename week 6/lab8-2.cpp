#include <iostream>
using namespace std;
class Mystring{
    public:
    string str;
    Mystring operator + (Mystring s){
    Mystring temp;
    temp.str = str + s.str;
    return temp;
}
};
int main() {
    Mystring s1, s2, result;
    result=s1+s2;
    return 0;
}