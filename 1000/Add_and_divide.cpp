#include <bits/stdc++.h>
typedef long long ll;
#define pi pair<int, int>;
#define pll pair<ll, ll>;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
/*--------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------*/
ll min_op(ll a, ll b, ll i)
{
    ll ans = i;
    ll dividend = a;
    ll divisor = b + i;
    while (dividend)
    {
        dividend /= divisor;
        ans++;
    }
    return ans;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == 0)
        cout << 0 << nl;
    else
    {
        ll res = a + 3;
        for (int i = (b < 2 ? 2 - b : 0); i < res; i++)
        {
            ll ans = min_op(a, b, i);
            res = min(ans, res);
        }
        cout << res << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}