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
    ll n, m;
    cin >> n >> m;
    vector<pii> vp(n);
    for (int i = 0; i < n; i++)
        cin >> vp[i].first >> vp[i].second;
    sort(vp.begin(), vp.end());
    int ongoing = 0;
    map<int, int> mp;
    set<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (vp[i].first == 1)
            continue;

        while (st.size() && *st.begin() <= vp[i].first)
        {
            ongoing -= mp[*st.begin()];
            st.erase(*st.begin());
        }
        ongoing++;
        mp[vp[i].second + 1]++;
        st.insert(vp[i].second + 1);
        ans = max(ans, ongoing);
    }
    ongoing = 0;
    mp.clear();
    st.clear();

    sort(vp.begin(), vp.end(), [&](pii i, pii j)
         {
        if(i.second!=j.second)return i.second<j.second;
        return i.first<j.first; });

    for (int i = n - 1; i >= 0; i--)
    {
        if (vp[i].second == m)
            continue;

        while (st.size() && *st.rbegin() >= vp[i].second)
        {
            ongoing -= mp[*st.rbegin()];
            st.erase(*st.rbegin());
        }

        ongoing++;
        mp[vp[i].first - 1]++;
        st.insert(vp[i].first - 1);
        ans = max(ans, ongoing);
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