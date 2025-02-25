#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;

        if ((a+b) % 2 == 0) {
            cout<<"Bob"<<nl;
        } else {
            cout<<"Alice"<<nl;
        }
    }

    return 0;
}