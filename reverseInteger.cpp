#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rev=0;
    int n;
    cout << "Enter the value of n";
    cin >> n;
    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n /10;
    }
    cout << rev;
}