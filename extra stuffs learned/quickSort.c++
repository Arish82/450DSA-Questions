#include <bits/stdc++.h>
using namespace std;

void printa(vector<int> arr,int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void QuickSort(vector<int> &arr,int s, int n){
    if(s==(n-1)||s==n){
        return;
    }
    int piv_index=n-1;
    int pivot=arr[piv_index];
    int i=s;
    while(arr[i]!=pivot){
        if(arr[i]<pivot){
            i++;
        }
        else{
            piv_index--;
            int pop=arr[i];
            arr.erase(arr.begin()+i);
            arr.insert(arr.begin()+piv_index+1,pop);
        }
    }
    QuickSort(arr,s,piv_index);
    QuickSort(arr,piv_index+1,n);
}

int main(){
    vector<int> arr={10,4,8,6,3,2};
    int n=arr.size();
    printa(arr,n);
    QuickSort(arr,0,n);
    printa(arr,n);
    return 0;
}