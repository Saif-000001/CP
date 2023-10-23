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

int digit(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void TEST_CASES()
{
    ll x, k;
    cin >> x >> k;
    while (1)
    {
        int d = digit(x);
        if (d % k == 0)
        {
            cout << x << "\n";
            return;
        }
        x++;
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