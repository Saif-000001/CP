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
    vector<ll> a(n);
    vector<ll> freq(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<ll> dp(n + 1, 0);
    for (int i = n; i >= 1; i--)
    {
        ll sm = 0, val = 0;
        for (ll j = i; j <= n; j += i)
        {
            sm += freq[j];
            val += dp[j];
        }

        dp[i] = (sm * (sm - 1)) / 2;
        dp[i] -= val;
    }

    ll ans = 0;
    vector<bool> visited(n + 1, false);
    for (ll i = 1; i <= n; i++)
    {
        bool check = false;
        if (freq[i] > 0)
        {
            for (ll j = i; j <= n; j += i)
            {
                if (!visited[j])
                {
                    ans += dp[j];
                    visited[j] = true;
                }
            }
        }
    }
    ans = ((n * (n - 1)) / 2 - ans);
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