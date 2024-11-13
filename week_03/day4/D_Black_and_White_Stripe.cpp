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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        queue<int> q;
        int ans = INT_MAX;

        int l=0, r=0;
        while(r<n)
        {
            if (s[r] == 'W') {
                q.push(r);
            }
            if ((r-l)+1 == k) {
                int qsize = q.size();
                ans = min(ans, qsize);
                if (!q.empty() && l == q.front()) {
                    q.pop();
                }
                l++;
            }
            r++;        
        }
        cout<<ans<<nl;
    }

    return 0;
}