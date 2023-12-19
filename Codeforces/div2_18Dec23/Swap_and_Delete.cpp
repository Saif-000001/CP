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
    if (s.size() == 1)
    {
        cout << 1 << "\n";
        return;
    }
    int ans = 0, z = 0, o = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            z++;
        else
            o++;
    }
    if (z == o)
        cout << 0 << '\n';
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && o != 0)
                o--;
            else if (s[i] == '1' && z != 0)
                z--;
            else
                break;
        }
        cout << o + z << "\n";
    }
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