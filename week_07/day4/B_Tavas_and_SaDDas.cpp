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

    string s = to_string(n);
    int sz = s.size();

    int ans = -2*(1-pow(2, sz-1));
    
    int x = 0;
    while(n > 0)
    {
        if (n % 10 == 7)
        {
            ans += (1<<x);
        }
        n = n / 10;
        x++;
    }

    cout<<ans+1<<nl;

    return 0;
}