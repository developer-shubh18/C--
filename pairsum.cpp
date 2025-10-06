#include<iostream>
#include<vector>
using namespace std;

// vector<int>pairsum(vector<int> nums, int target){
//     vector<int> ans;
//     int n = nums.size();
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;

//             }
//         }
//     }
//     return ans;
// }

vector<int> pairsum(vector<int> nums, int target ){    //WORKS FOR SORTED ARRAY!!!!
    vector<int>ans;
    int n = nums.size();
    int i=0, j=n-1;
    while(i<j){
        int pairsum = nums[i]+nums[j];
        if(pairsum<target){
            i++;
        }
        else if(pairsum>target){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            
            return ans;
        }

    }
    return ans;
}

int main(){
   vector<int> nums={7,5,10,18,45};
    int target = 63;
    vector<int> ans= pairsum(nums,target);
    cout<< ans[0] <<"," <<ans[1]<<endl;

    return 0;
}