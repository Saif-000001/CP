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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    ll cnt = 0, sum = 0;
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt++;
        else
        {
            sum += cnt;
            ans.push_back(sum);
        }
    }
    for (auto i : ans)
        cout << i << " ";
    ll k = ans.size(), x;
    x = abs(k - n);
    while (x--)
        cout << -1 << " ";
    cout << "\n";
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