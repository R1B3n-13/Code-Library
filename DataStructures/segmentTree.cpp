/**
 * Author: Tard1grad3 (sabn1999@gmail.com)
 * Created: Thursday, 16th February 2023 8:24:18 am (+6)
**/

#include<bits/stdc++.h>
using namespace std;

vector<int> v, seg;

void initSegTree(int n)
{
    v.assign(n, 0);
    seg.assign(4 * n, 0);
}

void buildSegTree(int id, int lo, int hi)
{
    if(lo == hi) {seg[id] = v[lo]; return;}
    int mid = (lo + hi) / 2, lc = 2 * id + 1, rc = lc + 1;
    buildSegTree(lc, lo, mid);
    buildSegTree(rc, mid + 1, hi);
    seg[id] = max(seg[lc], seg[rc]);
}

void updateSegTree(int id, int lo, int hi, int i, int x)
{
    if(i < lo || i > hi) return;
    if(lo == hi) {seg[id] = x; return;}
    int mid = (lo + hi) / 2, lc = 2 * id + 1, rc = lc + 1;
    updateSegTree(lc, lo, mid, i, x);
    updateSegTree(rc, mid + 1, hi, i, x);
    seg[id] = max(seg[lc], seg[rc]);
}

int querySegTree(int id, int lo, int hi, int l, int r)
{
    if(lo > r || hi < l) return INT_MIN;
    if(lo >= l && hi <= r) return seg[id];
    int mid = (lo + hi) / 2, lc = 2 * id + 1, rc = lc + 1;
    return max(querySegTree(lc, lo, mid, l, r),
               querySegTree(rc, mid + 1, hi, l, r));
}

int main()
{
    int n, q, l, r, i, x;
    cin >> n >> q;
    initSegTree(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    buildSegTree(0, 0, n - 1);
    while(q--)
    {
        cin >> i >> x >> l >> r;
        i--, l--, r--;
        updateSegTree(0, 0, n - 1, i, x);
        cout << querySegTree(0, 0, n - 1, l, r) << "\n";
    }
    return 0;
}

/*
sample input:
9 3
2 3 5 1 3 9 4 6 6
1 5 1 2
5 10 1 6
9 11 1 9
*/
