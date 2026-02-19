#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    vector<int> arr(n);
    vector<int> prefix(n);
    cout << "Enter the elements into the array";
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    prefix[0] = arr[0];
    for(int i=1; i<arr.size(); i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    for(int i=0; i<prefix.size(); i++){
        cout << prefix[i] << " ";
    }
    // cout << "Enter the ranges L and R";
    // int L;
    // cin >> L;
    // int R;
    // cin >> R;
    // cout << "Enter the query";
    // int Q;
    // cin >> Q;
    // int sum=0;
    // while(Q=!0){
    //     for(int i=L; i<=R; i++){
    //         sum = sum + prefix[i];
    //     }
    //     cout << "sum of range of queries is " << sum;
    // }
    return {};

}