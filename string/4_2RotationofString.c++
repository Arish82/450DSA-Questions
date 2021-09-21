#include <bits/stdc++.h>
using namespace std;

bool isequal(queue<char> q,queue<char> q1){
    if(q.size()!=q1.size()){
        return false;
    }
    while(!q.empty()){
        if(q.front()!=q1.front()){
            return false;
        }
        q.pop();
        q1.pop();
    }
    return true;
}
bool isRotation(string str,string str1){
    if(str.length()!=str1.length()){
        return false;
    }
    queue<char> q,q1;
    for(int i=0;i<str.length();i++){
        q.push(str[i]);
        q1.push(str1[i]);
    }
    for(int i=0;i<str.length();i++){
        char temp=q.front();
        q.pop();
        q.push(temp);
        if(isequal(q,q1)){
            return true;
        }
    }
    return false;
}

int main(){
    string str,str1;
    cin>>str>>str1;
    return 0;
}