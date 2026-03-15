#include<iostream>
#include<vector>
using namespace std;
double maxAvgOfSubarray(vector<int> &nums, int k){
    double sum=0;
    double maxavg=0;
    int  n=nums.size();
    for(int i=0; i<k; i++){
        sum=sum+nums[i];
    }
    maxavg=sum;
    for(int i=k; i<n; i++){
        sum=sum+nums[i]-nums[i-k];
        maxavg=max(maxavg, sum);
    }
    return maxavg/k;
}
int main(){
    vector<int> nums = {1,12,-5,-6,50,3};
    int k=4;
    cout << maxAvgOfSubarray(nums, 4) << endl;
    return 0;
}
