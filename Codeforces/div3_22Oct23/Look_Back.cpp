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

void TEST_CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = 0, per_step = 0;
    for (int i = 2; i <= n; i++)
    {
        ll x = a[i];
        while (per_step && x >= a[i - 1] * 2)
            x >>= 1, per_step--;

        ll this_step = per_step;
        while (x < a[i - 1])
            x <<= 1, this_step++;

        per_step = this_step;
        ans += this_step;
    }
    cout << ans << "\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}