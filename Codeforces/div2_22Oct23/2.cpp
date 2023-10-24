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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int ans = k, e = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            e++;
        if (x % k == 0)
            ans = 0;
        ans = min(ans, k - x % k);
    }

    if (k == 4)
    {
        if (e >= 2)
            ans = 0;
        else if (e == 1)
            ans = min(ans, 1);
        else
            ans = min(ans, 2);
    }
    cout << ans << "\n";
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