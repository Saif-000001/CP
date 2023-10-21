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
    string t;
    cin >> s >> t;
    int sz, tz;
    sz = s.size();
    tz = t.size();
    int lcm = (sz * tz) / __gcd(sz, tz);
    string s1, t1;
    for (int i = 0; i < lcm / sz; i++)
        s1 += string(s);
    for (int i = 0; i < lcm / tz; i++)
        t1 += string(t);
    if (s1 == t1)
        cout << s1 << "\n";
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