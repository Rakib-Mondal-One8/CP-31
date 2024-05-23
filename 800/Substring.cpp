#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;
        if(x == s)
        {
            cout<<"0\n";
        }
        else
        {
            int k = 0;
            bool f = false;
            while(x.size()<m)
            {
                x.append(x);
                k++;
                // cout << k << '\n';
            }
            while (true)
            {
                if (x.find(s) != string::npos)
                {
                    f = true;
                    break;
                }
                if(x.size() >= 25*m)
                    break;
                x.append(x);
                k++;
            }
            if (f == true)
            {
                cout << k << '\n';
            }
            else
                cout << "-1\n";
        }
    }   
    return 0;
}