/**
 * Author: Tard1grad3 (sabn1999@gmail.com)
 * Created: Wednesday, 9th November 2022 5:44:32 pm (+6)
**/

#include <bits/stdc++.h>
using namespace std;

int inclusionExclusion(int ar[], int n, int m)
{
    int odd = 0, even = 0;
    for(int i = 1; i < (1 << n); i++)
    {
        int p = 1;
        for(int j = 0; j < n; j++)
            if(i & (1 << j)) p *= ar[j];
        if(__builtin_popcount(i) & 1) odd += m / p;
        else even += m / p;
    }
    return odd - even;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n + 1];
    for(int i = 0; i < n; i++) cin >> ar[i];
    cout << inclusionExclusion(ar, n, m);
}