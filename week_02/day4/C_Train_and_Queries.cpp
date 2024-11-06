#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    map<int, pair<int,int>> occur;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if (occur.count(x) == 0) {
            occur[x].first = i;
        }
        occur[x].second = i;
    }

    while(k--)
    {
        int a, b;
        cin>>a>>b;
        if (occur.count(a) > 0 && occur.count(b) > 0)
        {
            auto itA = occur.find(a);
            int aFirst = itA->second.first;
            auto itB = occur.find(b);
            int bFirst = itB->second.first;
            int bLast = itB->second.second;

            if (aFirst <= bFirst || aFirst <= bLast) {
                cout<<"YES"<<nl;
            } else {
                cout<<"NO"<<nl;
            }
        } else {
            cout<<"NO"<<nl;
        }
    }

   

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