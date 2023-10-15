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
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x & 1)
            b.push_back(x);
        else
            a.push_back(x);
    }

    vector<int> add;
    for (int i = 0; i < a.size(); i++)
        add.push_back(a[i]);
    for (int i = 0; i < b.size(); i++)
        add.push_back(b[i]);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((add[i] & 1))
            {
                if (__gcd(add[i], add[j]) > 1)
                    ans++;
            }
            else
            {
                if (__gcd(add[i], (2 * add[j])) > 1)
                    ans++;
            }
        
        }
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