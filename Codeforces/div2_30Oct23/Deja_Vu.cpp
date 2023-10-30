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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), add;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (add.empty() || add.back() > x)
            add.push_back(x);
    }

    // for (auto i : add)
    //     cout << i << " ";
    // cout << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < add.size(); j++)
        {
            if (a[i] % (1 << add[j]) == 0)
                a[i] |= (1 << (add[j] - 1));
        }
    }

    for (auto i : a)
        cout << i << " ";
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
