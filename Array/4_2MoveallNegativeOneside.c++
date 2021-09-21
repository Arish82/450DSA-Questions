#include "bits/stdc++.h"
using namespace std;

void NegativeOneSide(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else{
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j--;
        }
    }
}
void NegativeOneSides(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]<0&&arr[j]<0){
            i++;
        }
        else if(arr[i]<0&&arr[j]>0){
            i++;
            j--;
        }
        else if(arr[i]>0&&arr[j]<0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NegativeOneSides(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    
}