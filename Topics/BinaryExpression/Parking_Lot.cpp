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

ll power(ll a, ll b)
{
    a %= MOD;
    ll res = 1L;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1L;
    }
    return res;
}

void TEST_CASES()
{
    ll n;
    cin >> n;

    ll ans = 2 * 4 * 3 * power(4, n - 3) + (n - 3) * 4 * 3 * 3 * power(4, n - 4);
    cout << ans << '\n';
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}