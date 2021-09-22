#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        set<int> arr;
            for(int i=0; i < m ; i++){
                arr.insert(b[i]);
            }
            b.clear();
            for(auto t: arr){
                b.push_back(t);
            }
            arr.clear();
            for(int i=0; i < n ; i++){
                arr.insert(a[i]);
            }
            a.clear();
            for(auto t: arr){
                a.push_back(t);
            }
        vector<int> ans;
        for(int i=0; i < b.size() ; i++){
            int l=arr.size();
            arr.insert(b[i]);
            if(l==arr.size()){
                ans.push_back(b[i]);
            }
        }
        arr.clear();
        for(int i=0;i<ans.size();i++){
            arr.insert(ans[i]);
        }
        ans.clear();
        for(auto t: arr){
            ans.push_back(t);
        }
        return ans;
        
    }
};
int main(){
    int m,n;
    cin>>m>>n;
    set<int> arr;
    // vector<int> a(m);
    // vector<int> b(n);
    for(int i=0; i < m ; i++){
        // cin>>a[i];
        int a;
        cin>>a;
        arr.insert(a);
    }
    for(int i=0; i < n ; i++){
        // cin>>b[i];
        int a;
        cin>>a;
        arr.insert(a);
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<arr.size()<<endl;

//     Solution ob;

// vector<int> a={4,9,5};
// vector<int> b={9,4,9,8,4};
//     vector<int> arr=ob.intersection(a,b);
//     for(auto it: arr){
//         cout<<it<<" ";
//     }


    return 0;
}