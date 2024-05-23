#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
bool dp[105][105];
bool min_steps(vector<int> a, int n, int x)
{
    if (n == 0)
    {
        if (x == 0)
            return true;
        else
            return false;
    }
    if(dp[n][x] != false)
    {
        return dp[n][x];
    }
    if (a[n - 1] <= x)
    {
        bool op1 = min_steps(a, n, x - a[n - 1]);
        if (op1)
        {
            ans.push_back(a[n - 1]);
            return true;
        }
        bool op2 = min_steps(a, n - 1, x);
        return dp[n][x] = op1 || op2;
    }
    else
        return dp[n][x] = min_steps(a, n - 1, x);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;

        vector<int> a;
        for (int i = 1; i <= x; i++)
        {
            if (i % k != 0)
                a.push_back(i);
        }
        ans.clear();
        memset(dp,false,sizeof(dp));
        min_steps(a,a.size(),x);
        cout<<ans.size()<<'\n';
        for(int val: ans)
        {
            cout<<val<<" ";
        }
        cout<<'\n';

    }
    return 0;
}