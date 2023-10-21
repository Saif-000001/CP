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

bool isFair(ll n)
{
    string s = to_string(n);
    for (char digit : s)
    {
        int d = digit - 48;
        if (d != 0 && n % d != 0)
            return false;
    }
    return true;
}

void TEST_CASES()
{
    ll n;
    cin >> n;
    while (!isFair(n))
        n++;
    cout << n << "\n";
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