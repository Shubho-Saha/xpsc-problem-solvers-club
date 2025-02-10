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
    string s;
    cin>>s;
    deque<char> dq;
    for(int i=n-1; i>=0;) {
        if (s[i] == 'a' || s[i] == 'e') {
            dq.push_front(s[i]);
            dq.push_front(s[i-1]);
            dq.push_front('.');
            i -= 2;
        } else {
            dq.push_front(s[i]);
            dq.push_front(s[i-1]);
            dq.push_front(s[i-2]);
            dq.push_front('.');
            i -= 3;
        }
    }

    for(int i=1; i<dq.size(); i++) {
        cout<<dq[i];
    }
    cout<<nl;
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