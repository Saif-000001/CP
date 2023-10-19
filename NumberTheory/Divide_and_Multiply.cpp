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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> ans;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0)
        {
            cnt++;
            a[i] /= 2;
        }
        ans.push_back(a[i]);
    }
    ll mx = INT_MIN;
    ll sum = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        sum += ans[i];
        mx = max(mx, ans[i]);
    }
    sum -= mx;
    while (cnt--)
        mx *= 2;
    cout << mx + sum << "\n";
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


 