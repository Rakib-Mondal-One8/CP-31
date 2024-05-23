#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> ans;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (l == r)
            {
                ans.push_back(a[l]);
                break;
            }
            ans.push_back(a[l]);
            ans.push_back(a[r]);
            l++;
            r--;
        }
        bool flag = true;
        int val = ans[0];
        for (int i = 1; i < n; i++)
        {
            if (ans[i] == val)
            {
                flag = false;
                break;
            }
            val += ans[i];
        }
        if (flag)
        {
            cout << "YES\n";
            for (int val : ans)
            {
                cout << val << " ";
            }
            cout << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}