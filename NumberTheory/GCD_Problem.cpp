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
    int arr[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    ll n;
    cin >> n;
    if (n & 1)
    {
        n--;
        ll a, b, c;
        c = 1;
        for (int i = 0; i < 10; i++)
        {
            ll x = arr[i];
            ll y = n - x;
            if (__gcd(x, y) == c)
            {
                a = x;
                b = y;
                break;
            }
        }
        cout << a << " " << b << " " << c << "\n";
    }
    else
        cout << 2 << " " << n - 3 << " " << 1 << "\n";
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