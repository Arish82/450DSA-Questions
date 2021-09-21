#include <bits/stdc++.h>
using namespace std;

int search(vector<int> arr, int k){
    int n=arr.size();
    int i=0,j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
            cout<<i<<" "<<mid<<" "<<j<<endl;
        if(arr[mid]==k){
            cout<<endl;
            return mid;
        }
        else if(arr[i]<arr[mid]){
            if(k >= arr[i] && k <= arr[mid]){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        else{
            if(k >= arr[mid] && k <= arr[j]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<search(arr,k);
    return 0;
}