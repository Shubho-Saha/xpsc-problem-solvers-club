#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin>>n;
    map<int, int> mp;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        int z = x % 10;
        mp[z]++;
        if (mp[z] < 4) {
            v.push_back(z);
        }
    }

    bool flag = false;
    for(int i=0; i<v.size()-2; i++) {
        for(int j=i+1; j<v.size()-1; j++) {
            for(int k=j+1; k<v.size(); k++) {
                if ((v[i]+v[j]+v[k]) % 10 == 3) {
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
        if (flag) break;
    }

    if (flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }


}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}