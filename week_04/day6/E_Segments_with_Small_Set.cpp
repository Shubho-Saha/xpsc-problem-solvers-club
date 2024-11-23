#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    map<int, int> mp;
    ll l=0, ans =0;


    for(int r=0; r<n; r++)
    {
        mp[vec[r]]++;

        while(mp.size() > k)
        {
            int key = vec[l];
            mp[key]--;
            if (mp[key] == 0) {
                mp.erase(key);
            }
            l++;
        }

        ans += r-l+1;
    }

    cout<<ans;

    return 0;
}