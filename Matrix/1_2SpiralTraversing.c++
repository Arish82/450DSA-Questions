// DFS method
#include <bits/stdc++.h>
using namespace std;

pair<int,int> searchArray(vector<vector<int>> arr,int n,int m,int ser){
    int i=0,j=m-1;
    int curr=arr[0][m-1];
    pair<int,int> p;
    p.first=p.second=-1;
    while(i<n&&j>=0){
        if(curr==ser){
            p.first=i;
            p.second=j;
            return p;
        }
        else if(curr<ser){
            curr=arr[++i][j];
        }
        else{
            curr=arr[i][--j];
        }
    }
    return p;
}
int main(){
    int n,m,ser;
    cin>>n>>m>>ser;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            arr[i].push_back(a);
        }
    }
    cout<<searchArray(arr,n,m,ser).first+1<<" "<<searchArray(arr,n,m,ser).second+1<<endl;


    return 0;
}