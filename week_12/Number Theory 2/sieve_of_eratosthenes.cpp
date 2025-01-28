#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n; 
    cin>>n;
    vector<bool> sieve(n+1, true);

    for(int i=2; i*i <= n; i++)
    {
        if (sieve[i] == false) continue;
        for(int k=i+i; k <= n; k += i)
        {
            sieve[k] = false;
        }
    }

    for(int i=2; i<=n; i++) {
        if (sieve[i]) {
            cout<<i<<" ";
        }
    }
    cout<<nl;

    return 0;
}