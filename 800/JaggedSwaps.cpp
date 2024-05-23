#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int s=1;s<n;s++)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] > a[i - 1] && a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
            }
        }
        int flag = false;
        for(int i=0;i<n-1;i++)
        {
            if(a[i] > a[i+1])
            {
               flag = true;
               break;
            }
        }
        if(flag == false)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}