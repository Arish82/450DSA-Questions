#include "bits/stdc++.h"
using namespace std;

// int QuickSelect(vector<int> &arr,int s,int n, int k){
//     int piv_index=n-1;
//     int pivot=arr[piv_index];
    
//     int i=s;
//     while(arr[i]!=pivot){
//         if(arr[i]<pivot){
//             i++;
//         }
//         else{
//             piv_index--;
//             int pop=arr[i];
//             arr.erase(arr.begin()+i);
//             arr.insert(arr.begin()+piv_index+1,pop);
//         }
//     }
//     if((k-1)==piv_index){
//         return arr[k-1];
//     }
//     else if(piv_index<k){
//         return QuickSelect(arr,s,piv_index,k);
//     }
//     else{
//         return QuickSelect(arr,piv_index+1,n,k);
//     }
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<QuickSelect(arr,0,n,k);
// }


int kthSmallest(int arr[],int s,int n,int k){
    int pivot=arr[n];
    int piv_index=n;
    int i=s;
    vector<int> ar(n);
    for(int i=s;i<=n;i++){
        ar[i]=arr[i];
    }
    while(pivot!=arr[i]){
        if(arr[i]<pivot){
            i++;
        }
        else{
            piv_index--;
            
        }
    }
}
int main(){
    int arr[]={10,5,8,3,6};
    cout<<kthSmallest(arr,0,4,2)<<endl;
}