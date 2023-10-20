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
int squarRoot(int n)
{
    int x = sqrt(n);
    return x * x == n;
}
void TEST_CASES()
{
    ll n;
    cin >> n;
    if (n % 2 == 0 && squarRoot(n / 2))
        cout << "YES\n";
    else if (n % 4 == 0 && squarRoot(n / 4))
        cout << "YES\n";
    else
        cout << "NO\n";
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