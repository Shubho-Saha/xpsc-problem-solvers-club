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
        int h, x, y;
        cin>>h>>x>>y;

        int count = 0;
        while(h>0)
        {
            if (h-y <= 0) {
                h -= y;
                count++;
            } else {
                h -= x;
                count++;
            }
        }
        cout<<count<<nl;
    }

    return 0;
}