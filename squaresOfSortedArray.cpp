#include<iostream>
#include<vector>
#include<algorithm>
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
    for(int i=0; i<nums.size(); i++){
        nums[i]=nums[i]*nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}