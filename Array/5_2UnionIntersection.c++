// Searching and sorting
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i < n ; i++){
        cin>>a[i];
    }
    for(int i=0; i < m ; i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i=0,j=0;
    vector<int> ans;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;j++;
        }
    }
    return 0;
}