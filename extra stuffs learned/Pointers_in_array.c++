#include <bits/stdc++.h>
using namespace std;

void printa(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}

void fun(vector<int> &arr){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
}

void ar(vector<int> &arr,int n){
    // vector<int> arrr(n);
    // for(int i=0;i<n;i++){
    //     arrr[i]=arr[i];
    // }
    fun(arr);
    // int temp=arr[0];
    // arr[0]=arr[1];
    // arr[1]=temp;
}
int main(){
    vector<int> arr={10,8,6,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    printa(arr,n);
    ar(arr,n);
    cout<<endl;
    printa(arr,n);

    return 0;
}