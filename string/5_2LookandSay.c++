#include <bits/stdc++.h>
using namespace std;

string generator(string str){
    unordered_map<char,int> arr;
    int c=0;
    string ans="";
    arr[str[0]]++;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            arr[str[i]]++;
        }
        else{
            ans+=(to_string(arr[str[i]])+str[i]);
            cout<<arr[str[i]]<<endl;
            arr.clear();
            arr[str[i+1]]++;
        }
    }
     return ans;
}
string countandsay(int n){
    string res="1";
    for(int i=1;i<n;i++){
        res=generator(res);
    }
    return res;
}
int main(){
    int n;
    cin>>n;

    cout<<countandsay(n);
    return 0;
}