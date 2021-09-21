#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &ch){
    if(ch.size()==0){
        return;
    }
    char cha=ch[0];
    ch.erase(ch.begin());
    reverseString(ch);
    ch.push_back(cha);
}
int main(){
    int n;
    vector<char> ch{'H','e','l','l','o'};
    reverseString(ch);
    for(int i=0;i<ch.size();i++){
        cout<<ch[i];
    }
    return 0;
}
// 1.
// reverse(ch.begin(),ch.end());

// 2.
// swap(ch[i],ch[n-i-1]);