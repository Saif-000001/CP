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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    vector<ll> sum(n + 3);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    ll x = a[1];
    
    for (int i = 2; i <= n; i++)
    {
        if (x + a[i] >= i * k)
            x = sum[i];
    }

    if (x >= n * k)
        cout << "Yes\n";
    else
        cout << "No\n";
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