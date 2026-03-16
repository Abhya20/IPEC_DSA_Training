#include<iostream>
#include<vector>
using namespace std;
int firstUniqChar(string s){
    for(int i=0; i<s.size(); i++){
        bool isUniq=true;
        for(int j=0; j<s.size(); j++){
            if(i!=j && s[i]==s[j]){
                isUniq=false;
                break;
            }
        }
    if(isUniq)
        return i;
    
    }
return -1;
}
int main(){
    string s = "loveleetcode";
    cout << firstUniqChar(s) << endl;
    return 0;
}