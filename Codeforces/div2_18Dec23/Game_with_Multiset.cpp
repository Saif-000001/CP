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
    int n;
    cin >> n;
    vector<int> vx(30, 0);
    vector<int> w;
    while (n--)
    {
        int t, v;
        cin >> t >> v;
        if (t == 1)
            vx[v]++;
        else
        {
            int x = 29;
            while (x >= 0)
            {
                if (vx[x])
                {
                    int k = v / pow(2, x);
                    int p = min(k, vx[x]);
                    v -= p * pow(2, x);
                }
                x--;
            }
            if (v == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}