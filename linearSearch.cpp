#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    vector<int> array(n);
    cout << "Enter the elements in array";
    for(int i=0; i<array.size(); i++){
        cin >> array[i];
    }
    int key;
    cout << "Enter the element you want to search";
    cin >> key;
    for(int i=0; i<array.size(); i++){
        if(array[i] == key){
            cout << array[i] << " " << i;
            return 0;
        }
    }
    cout << "Element not found";
}