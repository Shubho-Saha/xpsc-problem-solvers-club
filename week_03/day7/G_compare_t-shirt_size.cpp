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
        string a, b;
        cin>>a>>b;

        if (a[a.size()-1] == b[b.size()-1]) {
            if (a[a.size()-1] == 'S') {
                if (a.size() > b.size()) {
                    cout<<"<"<<nl;
                } else if (a.size() < b.size()) {
                    cout<<">"<<nl;
                }else {
                    cout<<"="<<nl;
                }
            } else if (a[a.size()-1] == 'L') {
                if (a.size() > b.size()) {
                    cout<<">"<<nl;
                } else if (a.size() < b.size()) {
                    cout<<"<"<<nl;
                }else {
                    cout<<"="<<nl;
                }
            } else {
                cout<<"="<<nl;
            }
        } else {
            if (a[a.size()-1] == 'S') {
                cout<<"<"<<nl;
            } else if (a[a.size()-1] == 'L') {
                cout<<">"<<nl;
            } else {
                if (b[b.size()-1] == 'L') {
                    cout<<"<"<<nl;
                } else {
                    cout<<">"<<nl;
                }
            }
        }
    }

    return 0;
}