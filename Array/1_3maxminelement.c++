// Compare Pairwise
#include "bits/stdc++.h"
using namespace std;

class Pair{
    public:
    int max;
    int min;
};

Pair getMaxMin(int arr[],int n){
    Pair p;
    int i;
    if(n%2==0){
        i=2;
        p.max=(arr[0]>arr[1])?arr[0]:arr[1];
        p.min=(arr[0]<arr[1])?arr[0]:arr[1];
    }
    else{
        i=1;
        p.max=p.min=arr[0];
    }
    for(;i<n;i+=2){
        int max=(arr[i]>arr[i+1])?arr[i]:arr[i+1];
        int min=(arr[i]<arr[i+1])?arr[i]:arr[i+1];
        p.max=(p.max>max)?p.max:max;
        p.min=(p.min<min)?p.min:min;
    }
    return p;
}
int main(){
    int arr[]={1000,11,1,3000,12,4};

    Pair p;
    p=getMaxMin(arr,6);

    cout<<"Max = "<<p.max<<"\nMin = "<<p.min<<endl;

    return 0;
}