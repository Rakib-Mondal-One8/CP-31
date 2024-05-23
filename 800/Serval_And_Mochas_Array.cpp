/*Div - 2*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return gcd(a, a % b);
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

        vector<int> v(n);
        vector<int>Gcd(n);
        
        cin>>v[0];
        int current =v[0];
        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
            
        }
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            current = gcd(current, v[i]);
        }
        // (cnt >= 2) ? cout << "YES\n" : cout << "NO\n";
        cout<<current<<" ";
        cout<<gcd(v[0],v[1])<<'\n';
    }
    return 0;
}