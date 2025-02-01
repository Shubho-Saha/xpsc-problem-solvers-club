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
    while(n--)
    {
        int l, r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }

    int sum = 0;
    for(auto [key, val] : mp) {
        sum += val;
        if (sum > 2) {
            cout<<"NO"<<nl;
            return 0;
        }
    }
    cout<<"YES"<<nl;

    return 0;
}

// https://codeforces.com/problemset/problem/845/C
