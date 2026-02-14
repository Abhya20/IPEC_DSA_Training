#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int m;
    cout << "Enter the value of m";
    cin >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout << "Enter the elements in array 1";
    for(int i=0; i<arr1.size(); i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements in array 2";
    for(int i=0; i<arr2.size(); i++){
        cin >> arr2[i];
    }
    bool ismatch = false;
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i] == arr2[j]){
            ismatch=true;
            cout << arr1[i] << " ";
            break;
        }
    }
    }
    if(ismatch==false){
        cout << "No common elements";
    }
    
}