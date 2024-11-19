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
    string t;
    cin>>t;
    deque<char> dq;

    while(!t.empty())
    {
        char last = t.back();
        if (last == '0')
        {
            t.pop_back();
            char lst = t.back();
            t.pop_back();
            char sec_last = t.back();
            t.pop_back();

            int num = (sec_last - '0') * 10 + (lst - '0');
            char letter = 'a' + (num -1);
            dq.push_front(letter);
        } else {
            char lst = t.back();
            t.pop_back();
            char letter = 'a' + (lst - '1');
            dq.push_front(letter);
        }
    }

    for(auto c : dq) {
        cout<<c;
    }
    cout<<nl;
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