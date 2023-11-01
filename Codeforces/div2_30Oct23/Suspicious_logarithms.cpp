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
const int mod = 1e9 + 7;
const int N = 2e5 + 5;
typedef pair<int, int> pii;

// ll gt(ll b, ll r)
// {
//     ll tl = b, ans = 0;
//     for (int i = 1; tl <= r; i++)
//     {
//         ll tr = tl * b - 1;

//         if (tl > (r + b - 1) / b)
//             tr = r;
//         tr = min(tr, r);
//         ll len = (tr - tl + 1) % mod;
//         ans = (ans + (len * i) % mod) % mod;
//         tl = tr + 1;
//     }
//     return ans;
// }

// ll get(ll r)
// {
//     ll ans = 0;
//     for (int i = 2;; i++)
//     {
//         ll tl = (1ll << i);
//         ll tr = (1ll << (i + 1)) - 1;
//         tr = min(tr, r);
//         if (tl > tr)
//             break;
//         ans = (ans + gt(i, tr) + mod - gt(i, tl - 1)) % mod;
//     }
//     return ans;
// }

// void TEST_CASES()
// {
//     ll l, r;
// 	cin >> l >> r;
// 	cout << (get(r) + mod - get(l - 1)) % mod << '\n';
// }

ll get(ll r)
{
    ll ans = 0;
    for (int i = 2;; i++)
    {
        ll mn = 1ll << i;
        ll mx = mn * 2 - 1;
        if (mx >= r)
            mx = r;
        int k = 0;
        ll x = 1;
        while (x <= (mn - 1) / i)
        {
            x *= i;
            k++;
        }

        if (x >= (mx + i) / i)
            ans = (ans + k * (mx - mn + 1)) % mod;
        else
        {
            x *= i;
            ans = (ans + k * (x - mn) + (k + 1) * (mx - x + 1)) % mod;
        }
        if (mx == r)
            break;
    }
    return ans;
}

void TEST_CASES()
{
    ll l, r;
    cin >> l >> r;

    cout << (get(r) - get(l - 1) + mod )%mod<< "\n";
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