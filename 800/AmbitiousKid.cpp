#include <bits/stdc++.h>
using namespace std;
class cmp
{
    public:
        bool operator()(int a,int b)
        {
            return a>b;
        }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int,vector<int>,cmp> q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if(val < 0)
            val*=-1;
        q.push(val);
    }
    cout<<q.top()<<'\n';
    return 0;
}