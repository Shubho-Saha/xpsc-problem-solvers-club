#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i=1; i<=n; i++) {
            int x; 
            cin>>x;
            mp[x] = i;
        }

        int res = 0;
        bool flag = false;
        for(int i=1; i<=1000; i++) {
            if (mp.count(i) != 0) {
                for(int j=1; j<=1000; j++) {
                    if (mp.count(j) != 0) {
                        if (__gcd(i, j) == 1) {
                            res = max(res, (mp[i]+mp[j]));
                            flag = true;
                        }
                    }
                }
            }
        }

        if (flag) {
            cout<<res<<nl;
        } else {
            cout<<-1<<nl;
        }

        
    }

    return 0;
}