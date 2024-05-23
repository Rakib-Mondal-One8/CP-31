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
        int n, d;
        cin >> n >> d;

        vector<int> a(n+5);
        a[0] = 0;
        int closetPump = 0;
        int mx=0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            closetPump = max(closetPump,a[i]);
            mx = max(mx,closetPump - a[i-1]);
        }
        
        int ans = max((d-closetPump)*2,mx);
        cout<<ans<<'\n';
    }
    return 0;
}