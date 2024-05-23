#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, r = 0;
        int ans = INT_MAX;
        int w = 0;
        while (r < n)
        {
            if (s[r] == 'W')
                w++;
            if ((r - l + 1) == k)
            {
                ans = min(ans, w);
                if (s[l] == 'W')
                    w--;
                l++;
            }
            r++;
        }
        cout << ans << nl;
    }
    return 0;
}