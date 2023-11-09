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
vector<ll> p(200007);

void TEST_CASES()
{
    ll n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        p[i] = p[i - 1] + x;
    }

    for (int i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        ll possition = lower_bound(p.begin(), p.begin() + n + 1, x) - p.begin();
        cout << possition << " " << x - p[possition - 1] << "\n";
    }
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