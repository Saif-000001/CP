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

const int mod = 1e9+7;
long long binaryEx(long n, long p)
{
    long long res = 1;
    while (p > 0)
    {
        if (p & 1)
            res = res * n % mod;
        n = n * n % mod;
        p >>= 1;
    }
    return res%mod;
}

void TEST_CASES()
{
    long long n;
    cin>>n;
    long long gcnt_4 = n/2;
    long long gcnt_5 = n - gcnt_4;

    long long ans = binaryEx(4LL, gcnt_4)%mod*binaryEx(5LL, gcnt_5)%mod;
    cout<<ans<<"\n";

}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}