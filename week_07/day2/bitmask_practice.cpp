#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n;
    cin>>n;

    // __lg() returns the position of last set bit
    int bitcnt = __lg(n);
    cout<<bitcnt<<nl;

    ll one = 1;
    ll x = one << 62;
    cout<<x<<nl;

    // ~0 = -1 which is basically indicates all 32 bits are 1
    int zero = ~0;
    cout<<zero<<nl;
    int lastbit = __lg(zero); // should return 31
    cout<<lastbit<<nl;
    for(int k = lastbit; k>=0; k--)
    {
        cout<<((zero >> k)&1);
    }
    cout<<nl;

    // biggest integer value
    int big = (1LL << 31)-1;
    lastbit = __lg(big); // should return 30 as 31th bit is 0 30th bit is 1.
    for(int k = lastbit; k>=0; k--)
    {
        cout<<((big >> k)&1);
    }
    cout<<nl;
    cout<<big<<nl;

    // 1<<31 == 2^31 which means 31th bit is One (1) and the rest 31 bits are 0 (0 based index). which exceeds the range of positive integer values by 1. so it will return a negative largest number.
    int high = (1<<31);
    cout<<high<<nl;

    cout<<(5 & (-1))<<nl;

    return 0;
}