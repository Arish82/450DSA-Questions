#include "bits/stdc++.h"
using namespace std;

class Pair{
    public:
    int min;
    int max;
};
Pair getMaxMin(int arr[],int s,int n){
    Pair p;
    if(s==n){
        p.max=p.min=arr[s];
        return p;
    }
    int mid=(s+n)/2;
    Pair p1= getMaxMin(arr,s,mid);
    Pair p2= getMaxMin(arr,mid+1,n);
    p.max=(p1.max<p2.max)?p2.max:p1.max;
    p.min=(p1.min>p2.min)?p2.min:p1.min;
    return p;
}
int main(){
    int arr[]={1000,1,11,2000,3000,4};
    Pair ans=getMaxMin(arr,0,5);
    cout<<"Max = "<<ans.max<<"\nMin = "<<ans.min<<endl;
    return 0;
}