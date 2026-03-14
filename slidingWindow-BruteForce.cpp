#include<iostream>
#include<vector>
using namespace std;
int maxSumSubarray(vector<int> &nums, int k){
    int maxSum=0;
    int n = nums.size();
    for(int i=0; i<n-k; i++){
        int currSum=0;
        for(int j=0; j<k; j++){
            currSum=currSum+nums[i+j];
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main(){
    vector<int> nums={2, 1, 5, 1, 3, 2};
    int k=3;
    cout << maxSumSubarray(nums, k) << endl;
    return 0;
}