#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> vec(m+1);
    for(int i=0; i<=m; i++) {
        cin>>vec[i];
    }

    int fedor = vec[m];
    int frndCnt = 0;
    for(int i=0; i<m; i++)
    {
        int diff = 0;
        int player = vec[i];
        for(int k = n-1; k>=0; k--)
        {
            int fedorbit = (fedor>>k)&1;
            int playerbit = (player>>k)&1;
            if (fedorbit != playerbit) 
            {
                diff++;
            }
        }
        if (diff <= k) frndCnt++;

    }

    cout<<frndCnt<<nl;

    return 0;
}