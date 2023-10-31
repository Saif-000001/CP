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
    vector<ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll ans = sum, temp = 0, x = 0;
    for (ll i = 0; i < n; i++)
    {
        temp += v[i];
        sum -= v[i];
        if (temp > sum)
        {
            x = temp - sum;
            x = (x + 1) / 2;
        }
        int res = sum + x;
        ans = min(ans, i + 1 + res);
    }
    cout << ans << endl;
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