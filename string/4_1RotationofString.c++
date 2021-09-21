#include <bits/stdc++.h>
using namespace std;

bool isRotation(string str,string str1){
    string temp=str+str;
    if(str.length()!=str1.length()){
        return false;
    }
    for(int i=0;i<temp.length();i++){
        string t=temp.substr(i,str1.length());
        if(t==str1){
            return true;
        }
    }
    return false;
}
int main(){
    string str,str1;
    cin>>str>>str1;

    cout<<isRotation(str,str1);
    return 0;
}