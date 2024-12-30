#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isPrime(ll n)
{
    if (n == 1) return false;

    for(ll i=2; i*i <=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    fastIO();
    ll n; cin>>n;

    if (isPrime(n)) {
        cout<<1;
    } else if (n%2 == 0) {
        cout<<2;
    } else {
        if (isPrime(n-2)) {
            cout<<2;
        } else {
            cout<<3;
        }
    }

    return 0;
}