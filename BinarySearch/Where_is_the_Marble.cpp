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
const int N = 2e5 +5;
typedef pair<int,int> pii;
int n, q;

int binarySearch( vector<int>a, int n, int x){
    int l = 0, r = n;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(a[mid]==x)return mid;
        else if(a[mid]<x)l = mid+1;
        else r = mid - 1;
    }
    return - 1;
}


void TEST_CASES()
{
    int t = 1;
    while(cin>>n>>q, n||q){
    vector<int>a(n);
    for(int i = 0; i<n; i++)cin>>a[i];
    sort(a.begin(), a.end());

    cout<<"CASE# "<<t++<<":";
    while(q--){
        int x;
        cin>>x;
        int ans = binarySearch(a, n, x);
        if(ans==-1)
            cout<<x<<" not found"<<"\n";
        else
            cout<<x<<" found at "<<ans<<"\n";

    }
    }


}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
  TEST_CASES();

    return 0;
}
