#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        int goal = 0;
        for(int i=0;i<n-1;i++)
        {
            cin>>v[i];
            goal+=v[i];
        }
        cout<<-1*(goal)<<'\n';
    }
    return 0;
}