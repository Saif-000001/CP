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
string month[13] = {"", "January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December"};

void TEST_CASES()
{
    string s;
    cin >> s;
    int x, t = 0;
    cin >> x;
    for (int i = 0; i < 13; i++)
    {
        if (month[i] == s)
            t = i;
    }

    for (int i = 1; i <= x; i++)
    {
        t++;
        if (t > 12)
            t = 1;
    }
    cout << month[t] << "\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}