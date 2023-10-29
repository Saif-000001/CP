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
    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<int> dq;
    for (int i = 0; i < n; i++)
        dq.push_back(s[i] - 48);

    vector<int> ans;
    int idx = 0;
    while (!dq.empty() && ans.size() <= 300)
    {
        if (dq.front() == dq.back() && dq.front() == 1)
        {
            ans.push_back(idx);
            dq.pop_back(), dq.push_front(1);
        }
        else if (dq.front() == dq.back() && dq.front() == 0)
        {
            ans.push_back(idx + dq.size());
            dq.pop_front(), dq.push_back(0);
        }
        else
            dq.pop_back(), dq.pop_front();
        idx++;
    }

    if (ans.size() > 300)
        cout << -1 << '\n';
    else
    {
        cout << ans.size() << '\n';
        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
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