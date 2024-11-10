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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (n != 5) {
            cout<<"NO"<<nl;
        } else {
            map<char, int> mp;
            for(char c : s) {
                mp[c]++;
            }
            if (mp['T'] == 1 && mp['i'] == 1 && mp['m']==1 && mp['u'] == 1 && mp['r'] == 1) {
                cout<<"YES"<<nl;
            } else {
                cout<<"NO"<<nl;
            }
        }
    }

    return 0;
}