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
    string s;
    cin >> s;
    vector<int> a;
    for (int i = 0; i < 4; i++)
    {
        int c = s[i] - 48;
        if (c == 0)
            a.push_back(10);
        else
            a.push_back(c);
    }
    // for(auto i : a)cout<<i<<" ";

    int prv = 1;
    int ans = 4;
    for (int i = 0; i < 4; i++)
    {
        ans += abs(a[i] - prv);
        prv = a[i];
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