#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    ans.push_back(arr[0]);
    cout << "Enter the elements into the array";
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    int i=0;
    for(int j=1; j<arr.size(); j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
            ans.push_back(arr[i]);
        }
    }
    cout << i+1 << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
    }
}