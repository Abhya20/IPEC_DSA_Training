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
    int j=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
    }
    for(int i=j; i<nums.size(); i++){
        nums[i]=0;
    }
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}