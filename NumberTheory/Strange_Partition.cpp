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
    ld n, x;
    cin >> n >> x;
    ll mx = 0, mn = 0;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        mx += a;
        mn += ceil(a / x);
    }
    cout << (ll)ceil(mx / x) << " " << mn << "\n";
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