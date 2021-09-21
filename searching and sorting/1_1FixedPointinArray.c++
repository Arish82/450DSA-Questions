#include <bits/stdc++.h>
using namespace std;


int fixedpoint(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            return i+1;}
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    
    cout<<fixedpoint(arr,n)<<endl;
    return 0;
}