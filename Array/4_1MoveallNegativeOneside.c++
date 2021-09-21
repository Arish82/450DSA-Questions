#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    int i=-1;
    int j=0;
    while(j<n){
        if(arr[j]<0){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rearrange(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }

return 0;
}