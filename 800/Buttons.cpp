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
        int a, b, c;
        cin >> a >> b >> c;

        int minVal = min(a, b);
        a -= minVal;
        b -= minVal;
        if (a >= b)
        {
            if (a == b && c % 2 != 0)
                cout << "First\n";
            else if(a>b)
                cout << "First\n";
            else
                cout << "Second\n";
            
        }
        else
        {
            if (b > a && (b + c) > (a + c))
            {
                cout << "Second\n";
            }
            else
                cout << "First\n";
        }
    }
    return 0;
}