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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    if (n == 1 && m == 1)
    {
        cout << "Yes\n";
        return;
    }
    string a;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            a += s[i];
            a += t;
        }
        else
            a += s[i];
    }

    bool f = true;
    for (int i = 0; i < a.size()-1; i++)
    {
        if (a[i] == a[i + 1])
        {
            f = false;
            break;
        }
    }

    if (f)
        cout << "Yes\n";
    else
        cout << "No\n";
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