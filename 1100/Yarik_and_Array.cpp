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
void _print(char t) {cerr << t;}
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
bool isPrime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (ll i = 5; i * i <= n; i += 6) {if (n % i == 0 || n % (i + 2) == 0)return false;} return true;}
ll lcm(ll a, ll b) {return (a / __gcd(a, b)) * b;}
int nXOR(int n) {if (n % 4 == 0)return n; if (n % 4 == 1)return 1; if (n % 4 == 2)return n + 1; return 0;}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
	int n;
	cin >> n;
	vector<ll>a(n);
	loop(i, 0, n - 1)cin >> a[i];
	bool e = false;
	bool o = false;
	int start = 0;
	loop(i, 0, n - 1) {
		if (a[i] > 0) {
			start = i;
			if (a[i] % 2)o = true;
			else e = true;
			break;
		}
	}
	int l = start, r = l;
	debug(l);
	ll sum = a[l];
	if (a[l] % 2 == 1)o = true;
	else o = false;
	ll res = LLONG_MIN;
	res = max(sum, res);
	r++;
	while (r < n) {
		if (o) {
			if (abs(a[r]) % 2 == 0) {
				if (a[r] < 0 && (sum + a[r]) < 0) {
					while (r < n && a[r] < 0) {
						r++;
					}
					sum = a[r];
					if (a[r] % 2 == 1) o = true;
					else o = false;
					l = r;
				}
				else {
					sum += a[r];
					o = false;
				}

			}
			else {
				while (r < n && a[r] < 0) {
					r++;
				}
				sum = a[r];
				if (a[r] % 2 == 1) o = true;
				else o = false;
				l = r;
			}

		}
		else {
			if (abs(a[r]) % 2 == 1) {
				if (a[r] < 0 && (sum + a[r]) < 0) {
					while (r < n && a[r] < 0) {
						r++;
					}
					sum = a[r];
					if (a[r] % 2 == 1) o = true;
					else o = false;
					l = r;

				}
				else {
					sum += a[r];
					o = true;
				}
			}
			else {
				while (r < n && a[r] < 0) {
					r++;
				}
				sum = a[r];
				if (a[r] % 2 == 1) o = true;
				else o = false;
				l = r;
			}
		}
		debug(res);
		if (r < n)
			res = max(sum, res);
		r++;
	}
	debug(res);
	ll ans = LLONG_MIN;
	sort(a.begin(), a.end());
	ll mx = a[n - 1];
	ans = max(ans, mx);
	res = max(ans, res);
	cout << res << nl;
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