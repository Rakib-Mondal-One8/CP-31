#include <bits/stdc++.h>
using namespace std;

vector<pair<int, bool>> a(1e7 + 5);
bool count(int num)
{
    int cnt  = 0;
    string s = to_string(num);
    for(char c: s){
        if(c != '0'){
            cnt++;
        }
    }
    return (cnt == 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= 999999; i++)
    {
        if (count(i) == 1)
            a[i].second = true;
        else
            a[i].second = false;
    }

    while (t--)
    {
        int n;
        cin >> n;
        int round = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i].second == true)
                round++;
        }
        cout << round << '\n';
    }
    return 0;
}