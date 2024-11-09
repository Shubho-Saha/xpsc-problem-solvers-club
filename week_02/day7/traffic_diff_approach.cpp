#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    char c;
    cin>>n>>c;
    string str;
    cin>>str;

    str += str;
    int lastG=-1;
    int ans = 0;
    for(int i=str.size()-1; i>=0; i--)
    {
        if (str[i] == 'g')
        {
            lastG = i;
        }
        if (str[i] == c && lastG != -1)
        {
            ans = max(ans, lastG-i);
        }
    }
    cout<<ans<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}