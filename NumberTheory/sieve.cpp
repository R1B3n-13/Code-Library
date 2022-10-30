/**
 * Author: Tard1grad3 (sabn1999@gmail.com)
 * Created: Monday, 31st October 2022 5:28:51 am (+6)
**/

#include    <bits/stdc++.h>
using       namespace               std;

const int sz = 6e7;

int  prime[sz];
bitset<sz> siv;

int sieve(int n)
{
    int id = 0;
    for(int i = 3; i * i <= n; i += 2)
        if(!siv[i])
            for(int j = i * i; j <= n; j += i + i)
                siv[j] = 1;
    prime[id++] = 2;
    for(int i = 3; i <= n; i += 2)
        if(!siv[i])
            prime[id++] = i;
    return id;
}

int main()
{
    int n, id;
    cin >> n;
    id = sieve(n);
    cout << "Number of primes: " << id << "\nThe primes are:\n";
    for(int i = 0; i < id; i++) cout << prime[i] << "\n";
}