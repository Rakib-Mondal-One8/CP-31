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

        vector<int> pm(n);
        int plus = 0;
        int minus = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> pm[i];
            if(pm[i] == -1)
            {
                minus++;
            }
            else
                plus++;
        }
        int steps = 0;
        while(minus%2 != 0 || plus < minus)
        {
            steps++;
            minus--;
            plus++;
        }
        cout<<steps<<'\n';

    }
    return 0;
}