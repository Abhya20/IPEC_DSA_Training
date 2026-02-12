#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cout << "Enter the valur for target";
    cin >> target;
    int n;
    cout << "Enter the value for n";
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
    cin >> arr[i];
   }
   for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size(); j++){
        if(arr[i] + arr[j] == target){
            cout << i << " " << j << endl;
        }
    }
    return 0;
   }
}