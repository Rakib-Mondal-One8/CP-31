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

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(k < 2)
        {
            bool f = true;
            for(int i=0;i<n-1;i++)
            {
                // cout << "1";
                if(a[i] > a[i+1])
                {
                    f = false;
                    break;
                }
            }
            if(f)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
