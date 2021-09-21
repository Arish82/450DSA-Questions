#include "bits/stdc++.h"
using namespace std;

void printa(vector<vector<int>> arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rotate(vector<vector<int>> &arr,int n){
    vector<vector<int>> dub_arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dub_arr[i].push_back(arr[i][j]);
        }
    }
    int x=0,y=0;
    for(int i=n-1;i>-1;i--){
        for(int j=0;j<n;j++){
            arr[x][y]=dub_arr[j][i];
            y++;
        }
        y=0;
        x++;
    }
}
void spiraltraverse(vector<vector<int>> arr,int n){
    int N=n;
    int s=0;
    int t=0;
    while(N-s>=1){
        if(N-s==1){
            int a=((int)n/2);
            cout<<arr[a][a]<<" ";
            break;
        }
        for(int i=s;i<N-1;i++){
            cout<<arr[n-N][i]<<" ";
        }
        rotate(arr,n);
        t++;
        if(t%4==0){
            N--;
            s++;
        }
    }
}

vector<int> spiralOrder(vector<vector<int>>& arr,int m, int n){
    
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            arr[i].push_back(a);
        }
    }
    spiraltraverse(arr,n);
    // printa(arr,n);
}