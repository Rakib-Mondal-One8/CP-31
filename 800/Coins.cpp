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
        long long n, k;
        cin >> n >> k;

        if (k%2 == 0 && n % 2 == 1)
        {
            cout << "NO\n";
            
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}

