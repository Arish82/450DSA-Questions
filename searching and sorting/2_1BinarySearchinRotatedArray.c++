#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> arr,int n){
    int i=0,j=n-1;
    int p=-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]>=arr[0]){
            i=mid+1;
        }
        else{
            p=mid;
            j=mid-1;
        }
    }
    return p;
}
int binSer(vector<int> arr,int s,int n,int k){
    int i=s,j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return -1;
}
int binarySearch(vector<int> arr,int n,int k){
    int p=pivot(arr,n);
    cout<<"p= "<<p<<endl;
    int ans;
    if(arr[n-1]<k){
        // perform binary Search on 0->p-1
        if(p>=0){
            ans=binSer(arr,0,p,k);
        }
        else{
            ans=binSer(arr,0,n,k);
        }
    }
    else if(arr[n-1]==k){
        return n-1;
    }
    else{
        // perform binary Search on p-> n-1
        if(p>=0){
            ans=binSer(arr,p,n,k);
        }
        else{
            ans=binSer(arr,0,n,k);
        }
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr,n,k)<<endl;

    return 0;
}