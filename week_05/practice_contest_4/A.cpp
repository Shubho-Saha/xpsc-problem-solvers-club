#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int ans = (a*c) + (b*d);
    cout<<ans;

    return 0;
}