#include "bits/stdc++.h"
using namespace std;

//Making of a pair
class Pair{
    public:
    int min,max;
};

Pair getMaxMin(int arr[],int n){
    cout<<n;
    Pair ans;
    ans.max=(arr[0]>arr[1])?arr[0]:arr[1];
    ans.min=arr[0]+arr[1]-ans.max;
    for(int i=2;i<n;i++){
        ans.max=(ans.max>arr[i])?ans.max:arr[i];
        ans.min=(ans.min>arr[i])?arr[i]:ans.min;
    }
    return ans;
}
int main(){
    Pair p;
    int arr[]={1000,11,445,1,330,3000};
    p = getMaxMin(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<"Brute Force\nMax No. = "<<p.max<<"\nMin No. = "<<p.min<<endl;
    return 0;
}