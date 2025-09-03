#include<iostream>
using namespace std;
int main(){
int a;
cout <<"enter value a : ";
cin>> a;
int b;
cout <<"enter value b : ";
cin>> b;
if(a>b){
    cout<<"A is greater : "<<a<<endl;
}else if(a<b){
    cout<<"B is greater : "<<b<<endl;
}else{
    cout<<"A is equal to B"<<endl;
}
if(a%2==0){
    cout<<"A is Even"<<endl;
}else{
    cout<<"A is odd"<<endl;
}
if(b%2==0){
    cout<<"B is Even"<<endl;
}else{
    cout<<"B is odd"<<endl;
}
// sum of n numbers:
int n;
int count =0;
int sum =0;
cout<<"enter value of n : ";
cin>>n;
for(int i=1;i<n;i++){
    while(count<=n){
        sum += count;
    }
}
cout<<sum;



    return 0;
}