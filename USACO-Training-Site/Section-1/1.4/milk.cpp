/*
ID: asif.an3
TASK: milk
LANG: C++                 
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

//using namespace chrono;

typedef long long ll;
typedef unsigned long long ull;
typedef vector< int > vi;
typedef vector< ll > V;
typedef map<int, int > mp;

#define pb push_back
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define F first
#define S second

#define debug cout << -1 << endl;
#define REP(i, a, b) for(int i=a; i<b; i++)
#define f0r(i, n) for (int i = 0; i < n; ++i)
#define f0r1(i, n) for (int i = 1; i <= n; ++i)
#define r0f(i, n) for(int i=n-1; i>=0; i--)
#define r0f1(i, n) for(int i=n; i>=1; i--)
#define fore(a, x) for (auto& a : x)
#define fori(i, a, b) for (int i = (a); i < (b); ++i)

#define MP make_pair
#define UB upper_bound
#define LB lower_bound
#define nw cout << "\n"

#define issq(x) (((ll)(sqrt((x))))*((ll)(sqrt((x))))==(x))
#define rev(v) reverse(v.begin(),v.end())
#define asche cerr<<"Ekhane asche\n";
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define all(v) v.begin(),v.end()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define valid(tx,ty) (tx>=0 && tx<n && ty>=0 && ty<m)
#define one(x) __builtin_popcount(x)

#define dag cerr << "-----------------------------------------\n";

//#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
 
//#define pop pop_back
#define setPrec(x) cout << fixed << setprecision(x)
 
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> ordered_set;
 
int count(int l, int r, ordered_set &st) {
    return st.order_of_key(r+1) - st.order_of_key(l);
}
 
#define sz(a) (int)a.size()
#define double long double
//#define fin cin
//#define fout cout
const int INF = 1e9;
const ll MOD = (ll)1e9+7;
const ll INFL = 1e18;
const ll mnINF = -1e18;
//const double diff = 10e-6;
const int MX = 100002;
const double PI = acos(-1);
using namespace std;

// int dx[] = {-1, 0, 1};
// int dy[] = {-1, 0, 1};

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
// int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
// int dy[] = {0, 0, -1, 1, 1, -1, 1, -1};

void solve() {
    int n, m;
    cin >> n >> m;
    ll ans = 0LL;
    vector< pair< ll, int > > v(m);
    f0r(i, m) {
        cin >> v[i].F >> v[i].S;
    }
    srt(v);
    int i = 0;
    while(n>0 && i<m) {
        int am = min(v[i].S, n);
        n-=am;
        ans += am*v[i].F;
        i++;
    }
    cout << ans << "\n";
}
void setIO(string name = "") { // name is nonempty for USACO file I/O

    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output

    // alternatively, cin.tie(0)->sync_with_stdio(0);

    if (name.size()) {

        freopen((name+".in").c_str(), "r", stdin); // see Input & Output

        freopen((name+".out").c_str(), "w", stdout);

    }

}

int32_t main()
{
//#ifndef ONLINE_JUDGE
//    freopen("inputf.in", "r", stdin);
//    freopen("outputf.in", "w", stdout);
//#endif
    // // setIO("transform");
    freopen("milk.in","r",stdin);
    freopen("milk.out","w",stdout);
    FastIO;
    // freopen("lightson.in","r",stdin);
    // freopen("lightson.out","w",stdout);
    int t;
    t = 1;
    // preCalc();
    // cin >> t;
    for(int i=0; i<t; i++) {
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}