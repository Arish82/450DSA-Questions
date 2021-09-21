#include <bits/stdc++.h>
using namespace std;

void SpiralOrder(vector<vector<int>> arr,int n,int m){
    int top=0,bottom=n-1;
    int l=0,r=m-1;
    int di=0;
    while(top<=bottom&&left<=right){
            if(di==0){
                for(int i=l;i<=r;i++){
                    cout<< arr[top][i]<<" ";
                }
                top++;
                di=1;
            }
            else if(di==1){
                for(int j=top;j<=bottom;j++){
                    cout<<arr[j][r]<<" ";
                }
                r--;
                di=2;
            }
            else if(di==2){
                for(int i=r;i>=l;i--){
                    cout<<arr[bottom][i]<<" ";
                }
                bottom--;
                di=3;
            }
            else{
                for(int j=bottom;j>=top;j--){
                    cout<<arr[j][l]<<" ";
                }
                l++;
                di=0;
            }
    }
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            arr[i].push_back(a);
        }
    }
    SpiralOrder(arr,n,m);

    return 0;
}