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
    map<int, int> mp;
    int ans = 1;
    for(int i=1; i<=n; i++) {
        int val; cin>>val;
        for(int k=2; k*k <=val ; k++) {
            bool flag = false;
            while(val % k == 0) {
                flag = true;
                val /= k;
            }
            if (flag) mp[k]++;
            ans = max(ans, mp[k]);
        }
        if (val > 1) {
            mp[val]++;
            ans = max(ans, mp[val]);
        } 
        
    }
    
    cout<<ans<<nl;
    

    return 0;
}