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
        int n, m;
        cin>>n>>m;

        int matchCount = 0;
        int remTeam = n;
        while(remTeam > 1)
        {
            int extraTeam =  remTeam % 2;
            matchCount += (remTeam / 2);
            remTeam = (remTeam/2) + extraTeam;
        }
        if (matchCount >= m) {
            cout<<"yes"<<nl;
        } else {
            cout<<"no"<<nl;
        }
    }

    return 0;
}