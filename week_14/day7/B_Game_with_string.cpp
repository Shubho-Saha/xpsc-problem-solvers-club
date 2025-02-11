#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    string s;
    cin>>s;
    stack<char> stk;
    int count = 0;
    for(auto c : s) {
        if (!stk.empty()) {
            char last = stk.top();
            if (c == last) {
                count++;
                stk.pop();
            } else {
                stk.push(c);
            }
        } else {
            stk.push(c);
        }
    }

    if (count&1) {
        cout<<"Yes"<<nl;
    } else {
        cout<<"No"<<nl;
    }

    return 0;
}