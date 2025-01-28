#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    // Prime Factorization using smallest prime factor

    int n;
    cin>>n;
    vector<int> pfactor;

    for(int i=2; i*i <= n; i++) {
        while(n % i == 0) {
            pfactor.push_back(i);
            n /= i;
        }
    }
    if (n > 1) pfactor.push_back(n);
    for(auto x : pfactor) {
        cout<<x<<" ";
    }

    return 0;
}