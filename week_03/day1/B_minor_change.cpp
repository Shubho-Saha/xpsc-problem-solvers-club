#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    string s, t;
    cin>>s>>t;
    int count = 0;

    for(int i=0; i<s.size(); i++)
    {
        if (s[i] != t[i]) count++;
    }
    cout<<count<<nl;

    return 0;
}