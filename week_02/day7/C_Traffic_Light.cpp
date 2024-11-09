#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; char c;
    cin>>n>>c;

    string str;
    cin>>str;

    int cIdx = -1;
    int gFirstOcc = -1;
    int gIdx = -1;
    int distance = INT_MIN;
    for(int i=0; i<n; i++) {
        if (str[i] == c && cIdx == -1) {
            cIdx = i;
        }
        if (str[i] == 'g')
        {
            if (gFirstOcc == -1) {
                gFirstOcc = i;
            }
            gIdx = i;
        }
        
        if (str[i] == 'g' && cIdx != -1) {
            distance = max(distance, (gIdx - cIdx));
            cIdx = -1;
        }
    }
    
    if (cIdx != -1)
    {
        distance = max(distance, (n-1-cIdx+gFirstOcc+1));
    }
    cout<<distance<<nl;
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