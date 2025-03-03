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
        string s;
        cin>>s;
        char c = s[0];
        int num = s[1] - '0';
        for(int i=1; i<=8; i++) {
            if (i==num) continue;
            cout<<c<<i<<nl;
        }
        for(int i=0; i<8; i++) {
            char x = 'a' + i;
            if (x == c) continue;
            cout<<x<<num<<nl;
        }
    }

    return 0;
}