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
        string s;
        cin >> n >> s;

        map<char, int> mp1;
        map<char, bool> mp2;
        int distinct = 0;
        loop(i, 0, n - 1)
        {
            mp1[s[i]]++;
            if (mp2[s[i]] == false)
                distinct++;
            mp2[s[i]] = true;
        }

        int mx = INT_MIN;
        int l1 = 0;
        int l2 = distinct;
        mp2.clear();
        loop(i, 0, n - 1)
        {
            mp1[s[i]]--;
            if (mp2[s[i]] == false)
            {
                l1++;
                mp2[s[i]] = true;
            }
            if (mp1[s[i]] == 0)
            {
                l2--;
            }
            mx = max(mx, l1 + l2);
        }
        cout << mx << nl;
    }
    return 0;
}