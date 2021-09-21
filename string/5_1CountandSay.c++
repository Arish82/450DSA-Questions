#include <bits/stdc++.h>
using namespace std;

string countandSay(string str,int n){
    if(n==1){
        return str;
    }
    int c=1;
    string str1="";
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            c++;
        }
        else{
            // cout<<str[i]<<"="<<c<<" ->";
            str1+=to_string(c)+str[i];
            // cout<<str1<<endl;
            c=1;
        }
    }
    return countandSay(str1,--n);
}
void rrun(){
    string str="11213331",str1="";
    int c=1;
    for(int i=0;i<=str.length();i++){
        if(str[i]==str[i+1]){
            c++;
        }
        else{
            cout<<str[i]<<"="<<c<<" ->";
            str1+=to_string(c)+str[i];
            cout<<str1<<endl;
            c=1;
        }
    }
    cout<<endl;
    cout<<str1<<endl;;
}
int main(){
    int n;
    cin>>n;

    cout<<countandSay("1",n);
return 0;
}