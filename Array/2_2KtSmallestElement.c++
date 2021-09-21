#include "bits/stdc++.h"
using namespace std;

//Merge Sort
void printa(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
void Merge(vector<int> &arr,int s, int mid, int n){
    int n1=mid-s+1;
    int n2=n-mid;
    vector<int> arr1(n1);
    vector<int> arr2(n2);

    for(int i=0;i<n1;i++){
        arr1[i]=arr[i+s];
    }
    for(int i=0;i<n1;i++){
        arr2[i]=arr[i+mid+1];
    }
    
    int j=0,k=0,i=s;
    while(j<n1&&k<n2){
        if(arr1[j]<arr2[k]){
            arr[i]=arr1[j];
            i++;
            j++;
        }
        else{
            arr[i]=arr2[k];
            k++;
            i++;
        }
    }
    while(j<n1){
        arr[i]=arr1[j];
        j++;
        i++;
    }
    while(k<n2){
        arr[i]=arr2[k];
        k++;
        i++;
    }
    
}
void MergeSort(vector<int> &arr, int s, int n){
    if(s==n){
        return;
    }
    int mid=(s+n)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,n);

    Merge(arr,s,mid,n);

}



int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    MergeSort(arr,0,n-1);
    cout<<arr[k-1];
    return 0;
}