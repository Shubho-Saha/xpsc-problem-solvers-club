#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, m;
    cin>>n>>m;
    vector<int> a(n), b(m);

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    vector<int> ans;

    int l=0, r=0, c=0;

    while(l < n || r < m)
    {
        if (r==m || (l<n && a[l] < b[r])) {
            ans.push_back(a[l]);
            l++;
        } else {
            ans.push_back(b[r]);
            r++;
        }
    }

    for( auto x : ans ) {
        cout<<x<<" ";
    }


    return 0;
}