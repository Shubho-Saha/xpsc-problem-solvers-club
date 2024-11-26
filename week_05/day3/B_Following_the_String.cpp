#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    vector<int> freq(27, 0);
    string s = "";

    for(int i=0; i<n; i++)
    {
        int val = vec[i];
        for(int i=0; i<26; i++) {
            if (freq[i] == val) {
                char c = i + 'a';
                s += c;
                freq[i]++;
                break;
            }
        }
    }

    cout<<s<<nl;

}
int main()
{
    fastIO();
    int t;
    t = 1; 
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}