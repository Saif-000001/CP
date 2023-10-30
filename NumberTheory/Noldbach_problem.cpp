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

int prim[1005];

void siev()
{
    memset(prim, 1, sizeof(prim));
    for (int i = 2; i <= 1000; i++)
    {
        if (prim[i])
        {
            for (int j = i + i; j <= 1000; j += i)
                prim[j] = 0;
        }
    }
}

void TEST_CASES()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int k = 2; k <= n; k++)
    {
        if (prim[k])
            for (int i = 2; i <= k; i++)
                if (prim[i])
                {
                    for (int j = i + 1; j <= k; j++)
                    {
                        if (prim[j])
                        {
                            if (i + j + 1 == k)
                                cnt++;
                            break;
                        }
                    }
                }
    }

    // cout << cnt << "\n";
    if (k <= cnt)
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
    // cin >> t;
    siev();
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}