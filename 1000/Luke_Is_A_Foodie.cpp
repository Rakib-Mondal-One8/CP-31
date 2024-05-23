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
        int n, x;
        cin >> n >> x;

        vector<int> a(n + 1);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }

        int mx = a[0];
        int mn = a[0];

        int cnt = 0;
        loop(i, 1, n - 1)
        {
            if (a[i] > mx)
                mx = a[i];
            if (a[i] < mn)
                mn = a[i];
            if (mx - mn > 2*x)
            {
                cnt++;
                mx = a[i];
                mn = a[i];
            }
        }
        cout << cnt << nl;
    }
    return 0;
}