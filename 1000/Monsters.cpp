

// #include <bits/stdc++.h>
// typedef long long ll;
// #define Yes cout << "YES" << '\n'
// #define No cout << "NO" << '\n'
// #define nl '\n';
// #define loop(i, s, n) for (int i = s; i <= n; i++)
// using namespace std;
// class cmp
// {
// public:
//     bool operator()(pair<int, int> a, pair<int, int> b)
//     {
//         return a.second < b.second || (a.second == b.second && a.first > b.first);
//     }
// };
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, d;
//         cin >> n >> d;

//         priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;
//         loop(i, 1, n)
//         {
//             int x;
//             cin >> x;

//             q.push({i, x});
//         }
//         vector<int> ans;
//         while (!q.empty())
//         {
//             auto mnstr = q.top();
//             q.pop();
//             int h = mnstr.second;
//             int p = mnstr.first;

//             if (h > 0)
//                 h -= d;
//             if (h <= 0)
//             {
//                 ans.push_back(p);
//             }
//             else
//             {
//                 q.push({p, h});
//             }
//         }
//         loop(i, 0, n - 1)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << nl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    }
};
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

        vector<pair<int,int>> q;
        loop(i, 1, n)
        {
            int x;
            cin >> x;

            int turns = x % d;
            if (turns != 0) // calculate the number of turns it would take for the monster's health to reach 0 or below
                q.push_back({i, turns});
            else
            {
                q.push_back({i, d});
            }
        }
        sort(q.begin(),q.end(),cmp());
        loop(i, 0, n - 1)
        {
            cout << q[i].first << " ";
        }
        cout << nl;
    }
    return 0;
}