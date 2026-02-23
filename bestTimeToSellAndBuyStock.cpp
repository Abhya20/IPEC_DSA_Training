#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    cout << "Enter the elements into the array";
    vector<int> nums(n);
    for(int i=0; i<nums.size(); i++){
        cin >> nums[i];
    }
    int profit=0;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(nums[j]-nums[i] > profit){
                profit = nums[j] - nums[i];
            }
        }
    }
    cout << "The profit is " << profit;
}