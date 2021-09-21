#include <bits/stdc++.h>
using namespace std;

pair<int,int> occurss(int arr[],int n,int x){
    int i=0,j=n-1;
    pair<int,int> p;
    p.first=p.second=-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]<x){
            i=mid+1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
        else{
            p.first=mid;
            if(arr[mid-1]==arr[mid]){
                j=mid-1;
            }
            else{
                break;
            }
        }
    }
    i=0;
    j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]<x){
            i=mid+1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
        else{
            p.second=mid;
            if(arr[mid+1]==arr[mid]){
                i=mid+1;
            }
            else{
                break;
            }
        }
    }
    return p;
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)                                                               {
        cin>>arr[i];
    }
    cout<<occurss(arr,n,x).first<<" "<<occurss(arr,n,x).second<<endl;

    return 0;
}