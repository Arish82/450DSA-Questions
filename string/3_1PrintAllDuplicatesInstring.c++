// Hashing technic
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int arr[256]={0};
    for(int i=0;i<str.length();i++){
        arr[str[i]+0]++;
    }
    for(int i=0;i<256;i++){
        if(arr[i]>1){
            cout<<(char)i<<"="<<arr[i]<<endl;
        }
    }
    return 0;
}