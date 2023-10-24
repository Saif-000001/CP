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
multiset<int> s, e;
void TEST_CASES()
{
    char c;
    int a, b;
    cin >> c >> a >> b;
    if (c == '+')
        s.insert(a), e.insert(b);
    else
        s.erase(s.find(a)), e.erase(e.find(b));

    if (s.size() && *s.rbegin() > *e.begin())
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
    cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}