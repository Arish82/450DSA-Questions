#include "bits/stdc++.h"
using namespace std;

// O(2*n) O(3)
void insert(int arr[],int s,int n,int element){
    for(int i=s;i<n;i++){
        arr[i]=element;
    }
}
void Sort012(int arr[],int n){
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0)
        x++;
        else if(arr[i]==1)
        y++;
        else
        z++;
    }
    insert(arr,0,x,0);
    insert(arr,x,x+y,1);
    insert(arr,x+y,x+y+z,2);
}
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int n=5;
    int arr[]={2 ,0 ,2 ,1 ,0};
    Sort012(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}