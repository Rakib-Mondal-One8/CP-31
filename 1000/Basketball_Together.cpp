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
    ll n, d;
    cin >> n >> d;

    vector<ll> a;
    int cnt = 0;
    loop(i, 0, n - 1)
    {
        ll x;
        cin>>x;

        if(x > d)
            cnt++;
        else
            a.push_back(x);

    }
    sort(a.begin(), a.end());
    int l = 0, r = a.size()-1;
    ll pl = 2;
    while (l < r)
    {
        if ((a[r] * pl) > d)
        {
            cnt++;
            l++;
            r--;
            pl = 2;
        }
        else
        {
            l++;
            pl++;
        }
    }
    cout << cnt << nl;
    return 0;
}