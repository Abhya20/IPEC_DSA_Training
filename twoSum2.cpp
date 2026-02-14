#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array";
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the value of target";
    cin >> target;
    int i = 0;
    int j = arr.size() - 1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            cout << i << j;
            return 0;
        }
    }
    return {};
}