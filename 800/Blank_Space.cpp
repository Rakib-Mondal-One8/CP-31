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
        int l = 0, r = 0, ans = 0, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum == 0)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (sum != 0)
                {
                    sum -= a[l];
                    l++;
                }
                ans = max(ans, r - l + 1);
            }
            r++;
        }
        cout << ans << '\n';
    }
    return 0;
}