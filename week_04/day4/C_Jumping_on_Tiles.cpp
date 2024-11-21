#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int sz = s.size();

    map<char, vector<int>> mp;
    for(int i=0; i<sz; i++)
    {
        mp[s[i]].push_back(i+1);
    }
    int minCost = abs(s[0] - s[sz-1]);

    if (s[0] == s[sz-1]) {
        int tilesCount = mp[s[0]].size();
        cout<<minCost<<" "<<tilesCount<<nl;
        for(auto x : mp[s[0]]) {
            cout<<x<<" ";
        }
        cout<<nl;
    } else if ( s[0] < s[sz-1]) {
        vector<int> v;
        int tilesCount = 0;
        char first_char = s[0];
        char last_char = s[sz-1];
        while(first_char <= last_char) 
        {
            tilesCount += mp[first_char].size();
            v.insert(v.end(), all(mp[first_char]));
            first_char = first_char + 1;
        }
        
        cout<<minCost<<" "<<tilesCount<<nl;
        for(auto x : v) {
            cout<<x <<" ";
        }
        cout<<nl;

    } else {
        vector<int> v;
        int tilesCount = 0;
        char first_char = s[0];
        char last_char = s[sz-1];
        while(first_char >= last_char) 
        {
            tilesCount += mp[first_char].size();
            v.insert(v.end(), all(mp[first_char]));
            first_char = first_char - 1;
        }
        
        cout<<minCost<<" "<<tilesCount<<nl;
        for(auto x : v) {
            cout<<x <<" ";
        }
        cout<<nl;
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