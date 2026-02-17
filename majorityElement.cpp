#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements into the array";
    for(int i=0; i<nums.size(); i++){
        cin >> nums[i];
    }
    int num=0;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(nums[i]==nums[j]){
                num++;
            }
            if(num>nums.size()/2){
                cout << nums[i];
                return 0;
            }
        }
        num=0;
    }
    return {};
}