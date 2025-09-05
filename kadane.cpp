#include<iostream>
using namespace std;
int main (){
    //  sub aray is the continuos part of the given array !! maximum number of subarray are n*(n+1)/2
//     int n =5;
//     int arr[5]={1,2,3,4,5};
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i =st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout << endl;
//     }
    // maximum sub array sum
    // brutforce approach
    int n =7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int maxsum = INT_MIN;
//     for(int st=0;st<n;st++){
//         int currsum=0;
//         for(int end=st;end<n;end++){
//             currsum = currsum+arr[end];
//             maxsum =max(currsum,maxsum);
//         }
//     }
// cout<<"max subarray sum = "<< maxsum<<endl; 

// KADANE'S ALGORITHM
 int currsum =0;
for(int i=0;i<n;i++){
    currsum = currsum+arr[i];
    maxsum = max(currsum,maxsum);
    if(currsum<0){
        currsum = 0;
    }
}
cout<<"max subarray sum = "<< maxsum<<endl; 

    return 0;
}