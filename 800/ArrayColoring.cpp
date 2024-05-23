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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int l = 0;
        int f = false;
        int parity = 0;
        for (int i = 0; i < n - 1; i++)
        {
            parity+=a[l];
            if (((sum-parity) % 2 != 0 &&( parity% 2 )!= 0) || ((sum-parity) % 2 == 0 && parity % 2 == 0))
            {
                f = true;
                break;
            }
            l++;
        }
        if(f == true)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}