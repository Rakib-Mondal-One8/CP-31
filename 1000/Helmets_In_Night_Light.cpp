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
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
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
        ll res, p;
        cin >> res >> p;

        vector<ll> a(res), b(res);
        loop(i, 0, res - 1)
        {
            cin >> a[i];
        }
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> q;
        loop(i, 0, res - 1)
        {
            cin >> b[i];
            q.push({a[i], b[i]});
        }

        ll cost = 0;
        cost += p;
        res--;
        while (res != 0)
        {
            auto r = q.top();
            q.pop();
            ll inform = r.first;
            ll mncost = r.second;

            if(mncost > p){
                cost+=p;
                res--;
            }
            else{
                if (inform <= res)
                {
                    cost += (inform * mncost);
                    res -= inform;
                }
                else
                {
                    cost += (res * mncost);
                    res = 0;
                }
            }
            
        }
        cout << cost << nl;
    }
    return 0;
}