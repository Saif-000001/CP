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
ll a, b;
int TEST_CASES()
{
    ll res = 1L;
    a %= 1000L;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % 1000L;
        a = (a * a) % 1000L;
        b >>= 1L;
    }
    return res;
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
        cin >> a >> b;
        ld power = (double)b * log10(a);
        ll firstDigits = pow(10, power - floor(power)) * 100.0;

        cout << firstDigits << "..." << setw(3) << setfill('0') <<TEST_CASES()<< "\n";
    }
    return 0;
}