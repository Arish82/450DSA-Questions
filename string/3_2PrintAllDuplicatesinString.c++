// Maps
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    map<char, int> m;
    for(int i=0;i<str.length();i++){
        m[str[i]]++;
    }
    for(auto &it: m){
        cout<<it.first<<"="<<it.second<<endl;
    }
    return 0;
}