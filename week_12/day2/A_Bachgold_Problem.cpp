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

    if (n & 1) {
        cout<<((n-3)/2)+1<<nl;
        cout<<3<<" ";
        for(int i=1; i<= (n-3)/2; i++) {
            cout<<2<<" ";
        }
        cout<<nl;
    } else {
        cout<<(n/2)<<nl;
        for(int i=1; i<=(n/2); i++) {
            cout<<2<<" ";
        }
        cout<<nl;
    }

    return 0;
}