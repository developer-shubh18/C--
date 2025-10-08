#include<iostream>
#include<vector>
using namespace std;
// // BRUTEFORCE APPROACH
//  int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int val;
//         for(int val : nums){
//             int freq =0;
//             for(int el : nums){
//                 if(el == val){
//                     freq++;
//                 }
//             }
//             if(freq>n/2){
//                 return val;
//             }
//         }
//         return -1;
//     }

// // OPTIMIZED APPROACH
// int majorityElement(vector<int>& nums){
//     int n = nums.size();
//     int ans = nums[0];
//     int count = 1;
//     for(int i=0;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             count++;
            
//         }else{
//             count=1;
//             ans = nums[i];
//         }
//         if(count>n/2){
//             return ans;
//         }
//     }
//     return ans;
// }

// MOORE'S VOTING ALGORITHM
int majorityElement(vector<int>& nums){
    int freq =0;
    int n = nums.size();
    int ans = nums[0];
    for(int i=0;i<n;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans==nums[i]){
            freq++;             //same element
        }else{
            freq--;             //different element
        }

    }
    return ans;
}


int main(){
    int nums[]={1,1,1,2,2,2,3,3,3,3,3,3,3};
    vector<int> numsVector(nums, nums + sizeof(nums) / sizeof(nums[0]));
    cout << majorityElement(numsVector) << endl;
    

    return 0;
}