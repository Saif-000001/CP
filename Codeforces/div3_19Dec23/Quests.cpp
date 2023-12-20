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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    vector<int> diffb(n + 10);
    diffb[0] = b[0];
    for (int i = 1; i < n; i++)
        diffb[i] = max(diffb[i - 1], b[i]);
    
    int total = 0, ans = 0;
    for(int i = 0; i<min(n, k); i++){
        total+=a[i];
        int r = k - (i+1);
        int p = total + r*diffb[i];
        ans = max(ans, p);
    }
    cout<<ans<<"\n";
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