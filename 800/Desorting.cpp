#include<bits/stdc++.h>
using namespace std;
int min_operations(vector<int> a)
{
    int mnOperations = INT_MAX;
    int n = a.size();
    for(int i=0;i<n-1;i++)
    {
        int cnt = (abs(a[i] - a[i+1])/2)+1;
        mnOperations = min(cnt,mnOperations);
    }
    return mnOperations;
    
}
int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>v(n);
        cin>>v[0];
        bool flag = false;
        for(int i=1;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<v[i-1])
            {
                flag = true;
            }
        }
        if(flag == true)
        {
            cout<<"0\n";
            continue;
        }
        int cnt = min_operations(v);
        cout<<cnt<<'\n';
    }
    return 0;
}