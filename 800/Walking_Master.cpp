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
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long time = 0;
        bool flag = true;
        if (b < d)
        {
            time += (d - b);
            a += (d - b);
            b += (d - b);
            if (b > d)
            {
                flag = false;
            }
        }
        
        if (a > c)
        {
            time += (a - c);
            a -= (a - c);
            if (a < c)
            {
                flag = false;
            }
        }
        
        if (flag && a == c && b == d)
        {
            cout << time << '\n';
        }
        else
            cout << "-1\n";
    }
    return 0;
}