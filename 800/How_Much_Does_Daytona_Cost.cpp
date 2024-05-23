#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        int freq[1005] = {0};
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
           freq[a[i]]++; 
        }
        if(freq[k] >= 1)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}