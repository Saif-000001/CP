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
    n -= 1;
    vector<int> arr;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        arr.push_back(a);
        arr.push_back(b);
    }

    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
        mp[arr[i]]++;
    
    int ans = 0;
    for (auto i : mp)
        if (i.second==1)ans++;
    
    cout<<(ans+1)/2<<"\n";
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