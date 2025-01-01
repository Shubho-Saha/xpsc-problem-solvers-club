#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll a, b;
    cin>>a>>b;

    ll n = (b-a+1)/2;

    cout<<"YES"<<nl;
    for(int i=1; i<=n; i++) {
        cout<<a<<" "<<a+1<<nl;
        a += 2;
    }

    return 0;
}