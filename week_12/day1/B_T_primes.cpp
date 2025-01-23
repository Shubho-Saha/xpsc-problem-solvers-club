#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e6+10;
vector<bool> primes(mxN+1, true);

void solve()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll x; 
        cin>>x;

        ll sroot = sqrt(x);
        if (sroot * sroot == x) {
            if (primes[sroot]) {
                cout<<"YES"<<nl;
            } else {
                cout<<"NO"<<nl;
            }
        } else {
            cout<<"NO"<<nl;
        }
    }
}

int main()
{
    fastIO();
    
    for(int i=2; i*i <= mxN; i++)
    {
        if (primes[i]) {
            for(int k=i+i; k<=mxN; k += i) {
                primes[k] = false;
            }
        }
    }
    primes[1] = false;

    solve();

    return 0;
}