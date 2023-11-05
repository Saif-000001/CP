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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, set<int>> ms;
    for (int i = 0; i < n; i++)
        ms[i % k].insert(a[i]);

    
    sort(a.begin(), a.end());
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ms[i % k].find(a[i]) == ms[i % k].end())
            cnt++;
    }

    if (cnt==0)
        cout << 0 << "\n";
    else if (cnt == 2)
        cout << 1 << "\n";
    else
        cout << -1 << "\n";
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
