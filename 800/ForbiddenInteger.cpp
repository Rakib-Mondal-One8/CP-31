#include <bits/stdc++.h>
using namespace std;
vector<int>ans;
bool dp[105][105];
bool is_possible(vector<int> a,int n,int x)
{
    if(n == 0)
    {
        if(x == 0)
            return true;
        else
            return false;
    }
    if(dp[n][x] != false)
    {
        return dp[n][x];
    }
    if(a[n-1] <= x)
    {
        bool op1 = is_possible(a,n,x-a[n-1]);
        if(op1 == true)
        {
            ans.push_back(a[n - 1]);
            return true;
        }
        bool op2 = is_possible(a,n-1,x);
        return dp[n][x] = op1 || op2;
    }
    else
        return dp[n][x] = is_possible(a, n - 1, x);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> v;
        for (int i = 1; i <= k; i++)
        {
            if (i != x)
            {
                v.push_back(i);
            }
        }
        ans.clear();
        bool flag = is_possible(v,v.size(),n);
        if(flag)
        {
            cout<<"YES\n";
            cout<<ans.size()<<'\n';
            for(int val:ans)
            {
                cout<<val<<" ";
            }
            cout<<'\n';
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}