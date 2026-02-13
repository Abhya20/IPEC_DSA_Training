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
    for(int i=0; i<arr.size(); i++){
        int largest = arr[i];
        bool isLargest = true;
        for(int j=0; j<arr.size(); j++){
            if(arr[j]>largest){
                isLargest = false;
                break;
            }
        }
        if(isLargest == true){
            cout << largest;
        }
    }
}