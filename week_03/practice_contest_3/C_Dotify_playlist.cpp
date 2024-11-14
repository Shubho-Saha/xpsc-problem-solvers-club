#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int N, K, L;
    cin>>N>>K>>L;
    vector<int> vec;
    for(int i=0; i<N; i++)
    {
        int Mi, Li;
        cin>>Mi>>Li;
        if (Li == L) {
            vec.push_back(Mi);
        } 
    }
    if (vec.size() < K) {
        cout<<-1<<nl;
    } else {
        sort(all(vec), greater<int>());
        int ans = 0;
        for(int i=0; i<K; i++) {
            ans += vec[i];
        }
        cout<<ans<<nl;
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