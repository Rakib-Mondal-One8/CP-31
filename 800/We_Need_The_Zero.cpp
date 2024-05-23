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

        int ans = 0; 
        //Main concept is if i go with x-or the elements with zero.
        //Then i will get a value.
        //And if i x-or those elements with that value then i will get zero.
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ans ^= x; //^= - X-or operator
        }
        if (n % 2 == 1 || ans == 0)
        {
            cout << ans << '\n';
        }
        else
            cout << "-1\n";
    }
    return 0;
}

