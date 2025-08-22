#include<iostream>
using namespace std;

int decitobin(int n){
    int ans =0, pov =1;
    while(n>0){
        int rem = n%2;
        n/=2;

        ans +=(rem*pov);
        pov *= 10;
    }
    return ans; //binary number 
}


int main(){
    int n=10;
    // cout<<decitobin(n)<<endl;
    for(int i=0;i<n;i++){
        cout<<decitobin(n)<<endl;
    }

    return 0;
}