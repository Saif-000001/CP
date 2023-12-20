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
typedef pair<ll, ll> pii;

void TEST_CASES()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    vector<pii> ap, bp, cp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ap.push_back({a[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        bp.push_back({b[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        cp.push_back({c[i], i});
    }

    sort(ap.begin(), ap.end(), greater<>());
    sort(bp.begin(), bp.end(), greater<>());
    sort(cp.begin(), cp.end(), greater<>());

    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (ap[i].second != bp[j].second && ap[i].second != cp[k].second && bp[j].second != cp[k].second)
                {
                    ans = max(ans, ap[i].first + bp[j].first + cp[k].first);
                }
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