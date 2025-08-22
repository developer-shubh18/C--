#include<iostream>
using namespace std;
int main()
{
    int a=5,b=6;
    cout<<"a&b="<<(a&b)<<endl;  //AND operator
    cout<<"a|b="<<(a|b)<<endl;  //OR operator
    cout<<"~a="<<(~a)<<endl;     //NOT operator
    cout<<"a^b="<<(a^b)<<endl;  //XOR operator
    cout<<"a<<1="<<(a<<1)<<endl;//Left shift operator
    cout<<"a>>1="<<(a>>1)<<endl;//Right shift operator
    return 0;
}