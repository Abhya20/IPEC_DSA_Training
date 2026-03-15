#include<iostream>
#include<vector>
using namespace std;
int maxSumSubarray(vector<int> &nums, int k){
    int n=nums.size();
    int windowSum=0;
    for(int i=0; i<k; i++){
        windowSum=windowSum+nums[i];
    }
    int maxSum=windowSum;
    for(int i=k; i<n; i++){
        windowSum=windowSum+nums[i]-nums[i-k];
        maxSum=max(windowSum, maxSum);
    }
    return maxSum;
}
int main(){
    vector<int> nums={2, 1, 5, 1, 3, 2};
    int k=3;
    cout << maxSumSubarray(nums, k);
    return 0;
}