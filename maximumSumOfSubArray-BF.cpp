#include<iostream>
#include<vector>
using namespace std;
int maxSubarraySum(vector<int> &nums){
    int res=0;
    for(int i=0; i<nums.size(); i++){
        int sum=0;
        for(int j=i; j<nums.size(); j++){
            sum=sum+nums[j];
            res=max(res, sum);
        }
    }
    return res;
}
int main(){
    vector<int> nums={2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(nums);
    return 0;
}