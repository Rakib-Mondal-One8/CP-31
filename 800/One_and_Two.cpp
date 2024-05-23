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
        a[0] = 1;
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == 2)
            {
                a[p++] = i + 1;
            }
        }
        if (p % 2)
        {
            cout << "-1\n";
        }
        else
        {
            cout << a[(p - 1) / 2] << '\n';
        }
    }
    return 0;
}

