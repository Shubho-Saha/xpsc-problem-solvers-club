#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    for(int i=2; i*i <=n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}
void solve()
{
    int l, r;
    cin>>l>>r;

    if (l == r && isPrime(l)) {
        cout<<-1<<nl;
        return;
    } else if (l == r && !isPrime(l) && (l&1)) {
        if (l == 1) {
            cout<<-1<<nl;
        } else {
            ll a;
            for(int i=2; i*i<=l; i++) {
                if (l%i == 0) {
                    a = i;
                    break;
                }
            }
            cout<<a<<" "<<l-a<<nl;
        }      
        return;
    } else if (l == r && !isPrime(l) && !(l&1)) {
        cout<<l/2<<" "<<l/2<<nl;
        return;
    } else {
        if (r&1) {
            r--;
        }
        int half = r/2;
        if (half == 1) {
            cout<<-1<<nl;
        } else {
            cout<<half<<" "<<half<<nl;
        }
    }
}

int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}