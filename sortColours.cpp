#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements 0's, 1's, 2's in the array";
    for(int i=0; i<nums.size(); i++){
        cin >> nums[i];
    }
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            zero++;
        }
        else if(nums[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    cout << "Total no of 0's = " << zero;
    cout << "Total no of 1's = " << one;
    cout << "Total no of 2's = " << two;

    int index=0;
    while(zero!=0){
        nums[index]=0;
        index++;
        zero--;
    }
    while(one!=0){
        nums[index]=1;
        index++;
        one--;
    }
    while(two!=0){
        nums[index]=2;
        index++;
        two--;
    }
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    return -1;
}