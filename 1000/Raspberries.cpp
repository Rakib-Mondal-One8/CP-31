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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);

        ll even = 0;
        ll minStep = INT_MAX;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            if ((a[i] % k) != 0)
            {
                minStep = min(minStep, k - (a[i] % k));
            }
            else
                minStep = min(minStep, 1ll * 0);
        }
        
        even = min(1ll * 2, even);
        if (k == 4)
        {
            minStep = min(minStep, 2 - even);
        }

        cout << minStep << nl;
    }
    return 0;
}