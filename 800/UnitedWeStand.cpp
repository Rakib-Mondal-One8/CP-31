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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int> b;
        vector<int> c;
        b.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            if(a[i] <= b.back()&& b.back()%a[i] == 0)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        if(b.empty() || c.empty())
        {
            cout<<"-1\n";
            continue;
        }
        cout<<b.size()<<" "<<c.size()<<'\n';
        for(int val : b)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
        for (int val : c)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}