#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        ll sum = 0;
        for(int i=0; i<n-2; i++) {
            sum += v[i];
        }
        ll secLast = v[n-2] - sum;
        cout<<v[n-1] - secLast<<nl;

    }

    return 0;
}