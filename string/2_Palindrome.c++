#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string str){
    int n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    string str="abba";
    cout<<isPalindrome(str)<<endl;
    return 0;
}