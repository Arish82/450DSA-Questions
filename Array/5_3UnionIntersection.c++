#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        vector<int> arr(100000,0);
        vector<int> arr1(100000,0);
        for(int i=0;i<n;i++){
            arr[a[i]]=1;
        }
        for(int i=0;i<m;i++){
            arr1[b[i]]=1;
        }
        vector<int> ans;
        for(int i=0;i<100000;i++){
            if(arr[i]==1&&arr1[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
int main(){
    // int n,m;
    // cin>>n>>m;
    // vector<int> a(n);
    // vector<int> b(m);
    // for(int i=0; i < n ; i++){
    //     cin>>a[i];
    // }
    // for(int i=0; i < m ; i++){
    //     cin>>b[i];
    // }
    vector<int> m1={1,2,2,1};
    vector<int> m2={2,2};
    vector<int> ans= intersection(m1,m2);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}