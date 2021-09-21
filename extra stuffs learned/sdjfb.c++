#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T)
    {
        long size = 1000000000;
        vector<int> ar(size, 0);
        T--;
        int n;
        cin>>n;
        vector<int> arr[n];
        vector<int> loc[n];
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int b;
                cin >> b;
                arr[i].push_back(b);
                ar[b] = 1;
                loc[i].push_back(b);
            }
        }

        for(int i=0;i<n;i++){
            if(ar[i]==1){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}