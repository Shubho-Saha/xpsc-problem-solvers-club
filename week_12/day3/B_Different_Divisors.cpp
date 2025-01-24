#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 20011+10;
vector<bool> prime(mxN+1, true);
vector<int> allprimes;

void genPrimes()
{
    for(int i=2; i<mxN; i++) {
        if (prime[i]) {
            for(int k=i+i; k<mxN; k += i) {
                prime[k] = false;
            }
        }
    }
    for(int i=1; i<mxN; i++) {
        if (prime[i]) {
            allprimes.push_back(i);
        }
    }   
}

void solve()
{
    int d;
    cin>>d;
    int first = *(lower_bound(all(allprimes), 1+d));
    int sec = *(lower_bound(all(allprimes), first+d));

    cout<<(first*sec)<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    genPrimes();
    while(t--) {
        solve();
    }

    return 0;
}