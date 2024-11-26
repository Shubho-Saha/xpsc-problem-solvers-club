#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;

    string str;
    cin>>str;

    string lock;
    cin>>lock;

    int minimumMove = INT_MAX;

    for(int i=0; i<= n-m; i++)
    {
        int movCnt = 0;
        for (int j=0; j<m; j++) {
            char strCh = str[i+j];
            int strDigit = strCh - '0';
            char lockCh = lock[j];
            int lockDigit = lockCh - '0';
            int ln1 = abs(strDigit - lockDigit);
            int ln2 = abs(0-strDigit) + abs(10-lockDigit);
            int ln3 = abs(10-strDigit) + abs(lockDigit);
            int mnMov = min({ln1, ln2, ln3});
            movCnt += mnMov;
        }
        minimumMove = min(minimumMove, movCnt);
    }

    cout<<minimumMove<<nl;
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