#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    vector<int> arr(n);
    vector<int> result;
    cout << "Enter elements in the array";
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    for(int i=0; i<arr.size(); i++){
        bool isleader=true;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]>arr[i]){
                isleader = false;
                break;
            }
        }
        if(isleader)
        result.push_back(arr[i]);
    }
    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";
}