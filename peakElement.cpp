#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout << "Enter the value of n";
    cin >> x;
    vector<int> arr(x);
    cout << "Enter the elements in the array";
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    int n = arr.size();
    int peak;
    if(x == 1){
        peak = 0;
        cout << peak;
        return 0;
    }
    if(arr[0] > arr[1]){
        peak = 0;
        cout << peak;
        return 0;
    }
    if(arr[n-1] > arr[n-2]){
        peak = n-1;
        cout << peak;
        return 0;
    }
    for(int i=1; i<n-1; i++){
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
            peak = i;
            cout << peak;
            return 0;
        }
    }
    return -1;
}