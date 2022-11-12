/**
 * Author: Tard1grad3 (sabn1999@gmail.com)
 * Created: Saturday, 12th November 2022 11:17:02 am (+6)
**/

#include    <bits/stdc++.h>

using       namespace               std;

#define     int                     long long
#define     fasterIO                ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     pb                      push_back
#define     pf                      push_front
#define     ln                      "\n"
#define     sz(x)                   (int) x.size()
#define     all(x)                  x.begin(), x.end()
#define     rall(x)                 x.rbegin(), x.rend()
#define     fwd(i, a, b)            for(int i=a; i<=b; i++)
#define     rev(i, a, b)            for(int i=a; i>=b; i--)
#define     mem(x)                  memset(x, 0, sizeof(x))
#define     mem_(x)                 memset(x, -1, sizeof(x))
#define     bct(x)                  __builtin_ctz(x)
#define     bpc(x)                  __builtin_popcountll(x)
typedef     unsigned long long      ull;
typedef     double                  db;
typedef     vector<int>             vi;
typedef     set<int>                si;
typedef     pair<int, int>          pi;
typedef     map<int, int>           mi;
typedef     map<char, int>          mc;
typedef     vector<pair<int, int>>  vp;
typedef     priority_queue<int>     pq;
typedef     tuple<int, int, int>    ti;

const       double Pi =             acos(-1);
const       int INF =               LLONG_MAX;
const       int INF32 =             INT_MAX;
const       int MOD =               1e9 + 7;
const       int N =                 1e6 + 2;

#define show(args...) {string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args);}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}

void run_case()
{
    int ans = 0, sum = 0, pos = 0, cur = 0, nxt = 0, prv = 0, mx = LLONG_MIN, mn = LLONG_MAX; // trackers
    int ans1 = 0, ans2 = 0, sum1 = 0, sum2 = 0, pos1 = 0, pos2 = 0; // extra trackers
    int a = 0, b = 0, c = 0, d = 0, n = 0, m = 0, k = 0, z = 0; // vars
    int cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0; // counters
    bool flg = 0, flg1 = 0, flg2 = 0, flg3 = 0, flg4 = 0; // flags
    /*_________________________________________________________________________________________________*/
    
}

int32_t main()
{
    fasterIO
    int TC = 1, k = 1;
    cin >> TC;
    while(TC--)
    {
        // cout << "Case " << k++ << ": ";
        run_case();
        cout << ln;
    }
    return 0;
}