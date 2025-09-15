#include<iostream>
using namespace std;

vector<int>pairsum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;

            }
        }
    }
    return ans;
}

int main(){
   vector<int> nums={7,5,18,45,10};
    int target = 63;
    vector<int> ans= pairsum(nums,target);
    cout<< ans[0] <<"," <<ans[1]<<endl;

    return 0;
}