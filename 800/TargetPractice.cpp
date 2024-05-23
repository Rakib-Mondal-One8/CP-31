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
        vector<vector<char>> grid(10, vector<char>(10));
        int point = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'X')
                {
                    if (i == 0 || i == 10 - 1)
                    {
                        point++;
                        continue;
                    }
                    if (j == 0 || j == 10 - 1)
                    {
                        point++;
                        continue;
                    }
                    if (i == 1 && j >= 1 && j <= 10 - 2)
                    {
                        point += 2;
                    }
                    else if (i == 2 && j >= 2 && j <= 10 - 3)
                    {
                        point += 3;
                    }
                    else if (i == 2 && (j == 1 || j == 10 - 2))
                    {
                        point += 2;
                    }
                    else if (i == 3 &&j >= 3 && j <= 10 - 4)
                    {
                        point += 4;
                    }
                    else if (i == 3 && (j == 2 || j == 10 - 3))
                    {
                        point += 3;
                    }
                    else if (i == 3 && (j == 1 || j == 10 - 2))
                    {
                        point += 2;
                    }
                    else if (i == 4 && j >= 4 && j <= 10 - 5)
                    {
                        point += 5;
                    }
                    else if (i == 4 && (j == 3 || j == 10 - 4))
                    {
                        point += 4;
                    }
                    else if (i == 4 && (j == 2 || j == 10 - 3))
                    {
                        point += 3;
                    }
                    else if (i == 4 && (j == 1 || j == 10 - 2))
                    {
                        point += 2;
                    }
                    //5
                    else if (i == 5 && j >= 4 && j <= 10 - 5)
                    {
                        point += 5;
                    }
                    else if (i == 5 && (j == 3 || j == 10 - 4))
                    {
                        point += 4;
                    }
                    else if (i == 5 && (j == 2 || j == 10 - 3))
                    {
                        point += 3;
                    }
                    else if (i == 5 && (j == 1 || j == 10 - 2))
                    {
                        point += 2;
                    }
                    //6
                    else if (i == 6 && j >= 3 && j <= 10 - 4)
                    {
                        point += 4;
                    }
                    else if (i == 6 && (j == 2 || j == 10 - 3))
                    {
                        point += 3;
                    }
                    else if (i == 6 && (j == 1 || j == 10 - 2))
                    {
                        point += 2;
                    }
                    //7
                    else if (i == 7 && j >= 2 && j <= 10 - 3)
                    {
                        point += 3;
                    }
                    else if (i == 7 && (j == 1 || j == 10 - 2))
                    {
                        point += 2;
                    }
                    //8
                    else if (i == 8 && j >= 1 && j <= 10 - 2)
                    {
                        point += 2;
                    }
                }
            }
        }
        cout << point << '\n';
    }
    return 0;
}

