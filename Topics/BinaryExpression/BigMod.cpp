#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1000000007;
const int N = 2e5 + 5;
typedef pair<int, int> pii;

ll bitPow(ll b, ll p, ll m)
{
    ll res = 1;
    while (p > 0)
    {
        if (p & 1)
            res = res * b % m;
        b = b * b % m;
        p >>= 1;
    }
    return res % m;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll b, p, m;
    while (cin >> b >> p >> m)
    {
        // cout << bitPow(b, p, m) << endl;
        cout << bitPow(b, p, m) << '\n';
        flush(cout);
    }
    return 0;
}