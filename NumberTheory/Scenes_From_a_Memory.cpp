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

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}

void TEST_CASES()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sz = s.size();
    int ans = -1;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 48;
        if (x == 1 || x == 4 || x == 6 || x == 8 || x == 9)
            ans = x;
    }

    if (ans != -1)
    {
        cout << 1 << "\n";
        cout << ans << "\n";
        return;
    }

    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            int x = (s[i] - 48) * 10 + (s[j] - 48);
            if (isPrime(x))
            {
                ans = x;
            }
        }
    }
    cout << 2 << "\n";
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