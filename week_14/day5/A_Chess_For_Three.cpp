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
        int a, b, c;
        cin>>a>>b>>c;

        int total = a + b + c;
        if (total % 2 != 0) {
            cout<<-1<<nl;
        } else {
            if (c <= total/2) {
                cout<<total/2<<nl;
            } else {
                cout<<a+b<<nl;
            }
        }
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1973/A