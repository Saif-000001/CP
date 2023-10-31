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

// void TEST_CASES()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int x = a[0];
//     bool f = false;

//     for (int i = 1; i < n; i++)
//     {
//         if (x > a[i])
//         {
//             if (((i - 1) & (i) ))
//                 f = true;
//         }
//         x = a[i];
//     }

//     if (!f)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }

void TEST_CASES()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int p, m = 0;
    bool f = true;
    for (int i = 1; i < n;)
    {
        p = (1 << m);
        vector<int> b;
        while (i <= p && i <= n)
        {
            b.push_back(a[i - 1]);
            i++;
        }

        for (int j = 1; j < b.size(); j++)
        {
            if (b[j - 1] > b[j])
            {
                f = false;
                break;
            }
        }
        m++;
        if (f == false)
            break;
    }

    if (f)
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