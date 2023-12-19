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

    string a, b;
    a += s[0];
    int l = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            l = i;
            break;
        }
        else
            a += s[i];
    }

    for (int i = l; i < s.size(); i++)
        b += s[i];

    int f = stoi(a);
    int se = stoi(b);

    if (se > f)
        cout << f << " " << se << "\n";
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