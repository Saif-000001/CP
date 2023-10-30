#include <bits/stdc++.h>
#include<numeric>
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
    int x, y, k;
    cin >> x >> y >> k;
    int g, l;
    for (int i = 0; i < k; i++)
    {
       g = gcd(x,y);
        if (x >= y)
            x = g;
        else
            y = g;

        l =lcm(x,y);
        if (x >= y)
            x = l;
        else
            y = l;

        if (x == y)
            break;
    }
    cout << x+y << '\n';
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