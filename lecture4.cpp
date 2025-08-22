#include<iostream>
using namespace std;
int sum(int a, int b){
    return(a+b);
}
int sumN(int n){
    int sum=0;
    for (int i=0;i<=n;i++){
        sum +=i;
    }
    return sum;
} 

int  factorialN(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int changeX(int x){
    x=2*x;
    cout<<"x = "<<x<<endl;
    return x;
}
int sumofdigit(int num){
    int digitsum =0;
    while(num>0){
       int  lastdigit = num%10;
        num=num/10;
        digitsum = digitsum+lastdigit;
    }
    cout<<"sum of digits= "<<digitsum<<endl;
    return digitsum;
}

int bincoef(int n,int r){
    int fact_n=factorialN(n);
    int fact_r=factorialN(r);
    int fact_nmr=factorialN(n-r);
    // int ncr=1;
    // ncr = fact_n/(fact_r*fact_nmr);
    // cout<<"binomial coefficient = " <<ncr<<endl;
    return fact_n/(fact_r*fact_nmr);

}

int main(){
    int x=8,y=10;
    cout<<"binomial coef = "<<bincoef(10,2)<<endl;
    sumofdigit(13456);
    changeX(x);
    cout<<x<<endl;
    cout<<  sum(x,y)<<endl;   //pass by value
    cout<<  sum(5,7)<<endl;
    cout<< "Sum of " <<"numbers " <<sumN(19)<<endl;
    cout<<"Factorial of "<<factorialN(0)<<endl;
    cout<<"Factorial of "<<factorialN(10)<<endl;
return 0;
}



