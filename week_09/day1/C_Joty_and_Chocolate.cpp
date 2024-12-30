#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;

    ll divisibleA = n/a;
    ll divisibleB = n/b;

    ll lcmm = (a/__gcd(a, b))*b;
    ll commonCnt = n/lcmm;

    if (p>q) {
        divisibleB -= commonCnt;
    } else if (p <= q) {
        divisibleA -= commonCnt;
    }

    ll res = (divisibleA*p) + (divisibleB*q);
    cout<<res;

    return 0;
}