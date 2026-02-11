#include<iostream>
using namespace std;
void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6] = {4,3,-6,2,8,5};
    printArray(arr, 6);
    reverseArray(arr, 6);
    printArray(arr, 6);

    return 0;
}
