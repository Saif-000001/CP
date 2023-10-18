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
    if ((n & 1) || (n < 4))
        cout << -1 << "\n";
    else
    {
        ll mx = n / 4;
        ll mn = n / 6;
        if (n % 6 == 2 && n - 8 >= 0)
            mn = ((n - 8) / 6) + 2;
        else if (n % 6 == 4 && n - 4 >= 0)
            mn = ((n - 4) / 6) + 1;
        cout << mn << " " << mx << "\n";
    }
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