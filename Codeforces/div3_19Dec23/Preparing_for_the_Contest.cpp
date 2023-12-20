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
const int N = 2e5 +5;
typedef pair<int,int> pii;

void TEST_CASES()
{
   int n ,k;
   cin>>n>>k;

   for(int i = n - k; i<=n; i++)
    cout<<i<<" ";
    for(int i = n - k - 1; i>0; i--)
    cout<<i<<" ";
    cout<<"\n";
   
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}