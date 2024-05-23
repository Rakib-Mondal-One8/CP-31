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
        int n;
        cin >> n;

        vector<pair<ll, ll>> v(2 * n + 1, {0, 0});
        map<ll, ll> mp;
        ll prev = 0;
        loop(i, 1, n)
        {
            ll x;
            cin >> x;
            if (prev == 0 || prev == x)
            {
                mp[x]++;
                if (v[x].first < mp[x])
                {
                    v[x].first = mp[x];
                }
                
            }
            else
            {
                mp[prev] = 0;
                
                mp[x]++;
                if (v[x].first < mp[x])
                {
                    v[x].first = mp[x];
                }
            }
            prev = x;
        }
        mp.clear();
        prev = 0;
        loop(i, 1, n)
        {
            ll x;
            cin >> x;
            if (prev == 0 || prev == x)
            {
                mp[x]++;
                if (v[x].second < mp[x])
                {
                    v[x].second = mp[x];
                }
                
            }
            else
            {
                mp[prev] = 0;
                
                mp[x]++;
                if (v[x].second < mp[x])
                {
                    v[x].second = mp[x];
                }
            }
            prev = x;
        }
        ll mx = INT_MIN;
        loop(i, 1, 2 * n)
        {
            mx = max(mx, (v[i].first + v[i].second));
        }
        cout << mx << nl;
    }
    return 0;
}
