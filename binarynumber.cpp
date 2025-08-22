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

int bintodeci(int binnum){
    int ans =0, pow =1;
    while(binnum>0){
        int rem =binnum%10;
        ans += rem*pow;
        binnum/=10;
        pow *=2;

    }
    return ans;//decimal number

}

// //TWO'S COMPLEMENT 
// int twoscomplement(){
//     int n;
//     cout << "Enter a decimal number: ";
//     cin >> n;

//     int bin = decitobin(n);

//     int ones = 0, pov = 1;
//     int temp = bin;
//     while(temp > 0){
//         int rem = temp % 10;
//         rem = (rem == 0) ? 1 : 0;
//         ones += rem * pov;
//         pov *= 10;
//         temp /= 10;
//     }
//     int twos = ones + 1;
//     int result = bintodeci(twos);

//     cout << "Two's complement in binary: " << twos << endl;
//     cout << "Two's complement in decimal: " << result << endl;
//     return result;
// }


int main(){
    int n=10;
    // cout<<decitobin(n)<<endl;
    for(int i=0;i<n;i++){
        cout<<decitobin(i)<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
    cout<<bintodeci(i)<<endl;
    }
    cout<<endl;
    // cout<<twoscomplement();
    return 0;
}