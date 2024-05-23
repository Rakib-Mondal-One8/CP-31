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

        vector<long long> v(n);
        vector<long long> ans;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int l = 0, r = 0;
        long long steps = 0;
        while (l < n)
        {
            r = l + 1;
            while (r < n && v[l] % 2 == v[r] % 2)
            {
                v[r] = v[l] * v[r];
                r++;
                steps++;
            }
            ans.push_back(v[l]);
            l = r;
        }
        cout << steps << '\n';
    }
    return 0;
}