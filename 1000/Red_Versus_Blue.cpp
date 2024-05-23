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
        int n, r, b;
        cin >> n >> r >> b;

        int p = r / (b + 1), q = r % (b + 1);
        // cout << p << " " << q << nl;
        loop(i, 0, q - 1)
        {
            cout << string(p + 1, 'R') << 'B';
        }
        loop(i, q, b - 1)
        {
            cout << string(p, 'R') << 'B';
        }
        cout << string(p, 'R') << nl;
    }
    return 0;
}