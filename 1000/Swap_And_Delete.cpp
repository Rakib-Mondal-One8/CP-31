// #include <bits/stdc++.h>
// typedef long long ll;
// #define Yes cout << "YES" << '\n'
// #define No cout << "NO" << '\n'
// #define nl '\n';
// #define loop(i, s, n) for (int i = s; i <= n; i++)
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int zeros = 0, ones = 0;
//         for (char c : s)
//         {
//             if (c == '0')
//             {
//                 zeros++;
//             }
//             else
//             {

//                 ones++;
//             }
//         }
//         int steps = 0;
//         string t = "";
//         for (char c : s)
//         {
//             if (c == '0')
//             {
//                 if (ones > 0)
//                 {
//                     ones--;
//                     t += '1';
//                 }
//                 else
//                     break;
//             }
//             if (c == '1')
//             {
//                 if (zeros > 0)
//                 {
//                     zeros--;
//                     t += '0';
//                 }
//                 else
//                     break;
//             }
//         }
//         cout << (s.size() - t.size()) << nl;
//     }
//     return 0;
// }

