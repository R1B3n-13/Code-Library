/**
 * Author: Tard1grad3 (sabn1999@gmail.com)
 * Created: Monday, 31st October 2022 7:43:43 am (+6)
**/

#include <bits/stdc++.h>
using namespace std;

vector<int> v, seg;

void initsegTree(int n)
{
    v.assign(n, 0);
    seg.assign(4 * n, 0);
}

void build(int id, int lo, int hi)
{
    if(lo == hi) {seg[id] = v[lo]; return;}
    int mid = (lo + hi) / 2, lc = 2 * id + 1, rc = lc + 1;
    build(lc, lo, mid);
    build(rc, mid + 1, hi);
    seg[id] = max(seg[lc], seg[rc]);
}

int query(int id, int lo, int hi, int l, int r)
{
    if(l > hi || r < lo) return INT_MIN;
    if(l <= lo && r >= hi) return seg[id];
    int mid = (lo + hi) / 2, lc = 2 * id + 1, rc = lc + 1;
    return max(query(lc, lo, mid, l, r),
               query(rc, mid + 1, hi, l, r));
}

int main()
{
    int n, q, l, r;
    cin >> n >> q;
    initsegTree(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    build(0, 0, n - 1);
    while(q--)
    {
        cin >> l >> r;
        l--, r--;
        cout << query(0, 0, n - 1, l, r) << "\n";
    }
}