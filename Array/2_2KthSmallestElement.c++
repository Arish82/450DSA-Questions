#include "bits/stdc++.h"
using namespace std;

int getKthMax(vector<int> arr, int k, int N){
    sort(arr.begin(),arr.end());
    return arr[k-1];
}
int main(){
    int N,k;
    cin>>N>>k;
    vector<int> arr(N);
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        // arr.push_back(a);
        arr[i]=a;
    }
    cout<<k<<"th Max Element = "<<getKthMax(arr,k,N);
    return 0;
}