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
        if (s.size() == 2 && s[0] == '(' && s[1] == ')') {
            cout<<"NO"<<nl;
            continue;
        }

        bool flag = false;
        for(int i=0; i<s.size()-1; i++) {
            if (s[i] == s[i+1]) {
                flag = true;
                break;
            }
        }

        if (flag) {
            string part = "()";
            cout<<"YES"<<nl;
            for(int i=0; i<s.size(); i++) {
                cout<<part;
            }
            cout<<nl;
        } else {
            cout<<"YES"<<nl;
            for(int i=0; i<s.size(); i++) {
                cout<<'(';
            }
            for(int i=0; i<s.size(); i++) {
                cout<<')';
            }
            cout<<nl;
        }
    }

    return 0;
}