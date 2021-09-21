// Based on Dutch national flag problem
#include <bits/stdc++.h>
using namespace std;

void Sort012(int arr[],int n){
    int i=0,j=0;
    int k=n-1;
    while(j<=k){
        cout<<i<<j<<k<<endl;
        if(arr[j]==0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
            j++;
        }
        else if(arr[j]==1){
            j++;
        }
        else{
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            k--;
        }
    }
}
int main(){
    int arr[]={1, 2, 1, 2 ,0};
    Sort012(arr,5);
    for(int x:arr){
        cout<<x<<" ";
    }
return 0;
}