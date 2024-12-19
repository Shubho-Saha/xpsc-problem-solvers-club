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

    for(int i=0; i< (1<<n); i++)
    {
        for(int k=n-1; k>=0; k--) {
            cout<<((i>>k)&1);
        }
        cout<<nl;
    }

    return 0;
}