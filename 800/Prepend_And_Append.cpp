#include <bits/stdc++.h>
using namespace std;
int len(string s, int length)
{
    if (length == 1)
    {
        return 1;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            length -= 2;
        }
        else
            break;
    }
    return length;
}
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

        string s;
        cin >> s;

        int ans = len(s, n);
        (ans > 0) ? cout << ans << '\n' : cout << "0\n";
    }
    return 0;
}