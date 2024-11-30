#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int, int> mp;
    int maxCnt = 0;
    for(int i=0; i<n; i++) {
        int x; 
        cin>>x;
        int newCnt = ++mp[x];
        if (newCnt > maxCnt) {
            maxCnt = newCnt;
        }
    }

    if (maxCnt == n) {
        cout<<0<<nl;
        return;
    }
    
    int valNeed = n - maxCnt;
    int cloneCnt = maxCnt;
    int duplicate = 0;
    int need;
    while(true)
    {
        duplicate++;
        maxCnt += cloneCnt;
        need = n - maxCnt;
        if (need <= 0 ) break;
        cloneCnt = maxCnt;
    }
    cout<<valNeed+duplicate<<nl;

}
int main()
{
    fastIO();
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}