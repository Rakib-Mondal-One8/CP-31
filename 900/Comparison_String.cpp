#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
/*Problem Link -> */
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi pair<int, int>
#define pll pair<ll, ll>
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
#define sz(x) ((int)(x).size())
using namespace std;
using namespace __gnu_pbds;
using namespace chrono;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbdms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
/*Debug*/
#ifdef Rakib_18
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void init_code() {
#ifdef Rakib_18
	freopen("Error.txt", "w", stderr);
#endif
}
const int mod = 1e9 + 7;
// const int mod = 998244353;
// const long long mod = 1375927501846395853LL;
bool isPrime(ll n) { if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (ll i = 5; i * i <= n; i += 6) { if (n % i == 0 || n % (i + 2) == 0)return false; } return true; }
ll lcm(ll a, ll b) { return (a / __gcd(a, b)) * b; }
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<int>ans;
	// if (s[0] == '>') {
	// 	ans.push_back(200);
	// 	int x = 200;
	// 	for (auto c : s) {
	// 		if (c == '>')ans.push_back(--x);
	// 		if (c == '<') {
	// 			ans.push_back(200);
	// 			x = 200;
	// 		}
	// 	}
	// }
	// else {
	// 	ans.push_back(1);
	// 	int x = 1;
	// 	for (auto c : s) {
	// 		if (c == '>')ans.push_back(--x);
	// 		if (c == '<')ans.push_back(++x);
	// 	}
	// }

	ans.push_back(1);
	int x = 1;
	int mx = 1;
	int mn = 1;
	for (int i = 0; i < n; i++) {
		char c = s[i];
		if (c == '>') {
			if (i < n - 1 && s[i + 1] == '<' && mn < ans.back()) {
				ans.push_back(mn);
				x = mn;
			}
			else {
				ans.push_back(--x);
				mn = min(mn, x);
			}

		}
		if (c == '<') {
			if (i < n - 1 && s[i + 1] == '>' && mx > ans.back()) {
				ans.push_back(mx);
				x = mx;
			}
			else {
				ans.push_back(++x);
				mx = max(mx, x);
			}
		}
	}
	debug(ans);


	set<int>res;
	for (auto val : ans)res.insert(val);
	cout << res.size() << nl;
}
int main()
{
	init_code();
	fastio();
	int t = 1;
	cin >> t;
	auto start1 = high_resolution_clock::now();
	while (t--)
	{
		solve();
	}
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef Rakib_18
	cerr << "Time: " << duration . count() / 1000 << " ms" << endl;
#endif
	return 0;
}