#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isPalindrome(string s) {
    string r = s;
    reverse(all(r));
    return r == s;
}

bool palinPair(string s1, string s2) {
    reverse(all(s2));
    return s1 == s2;
}
int main()
{
    fastIO();
    int n, m;
    cin>>n>>m;
    vector<string> v(n);
    vector<bool> vis(n, false);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<pair<string, string>> palin;
    vector<string> single;
    for(int i=0; i<n; i++)
    {
        bool pfound = false;
        for(int j=i+1; j<n; j++) 
        {
            if (palinPair(v[i], v[j])) {
                pfound = true;
                if (vis[j] == false ) {
                    palin.push_back({v[i], v[j]});
                    vis[j] = true;
                    break;
                }          
            }
        }

        if (pfound == false && isPalindrome(v[i])) {
            single.push_back(v[i]);
        }
    }

    if (single.size() == 0 && palin.size() == 0) {
        cout<<0<<nl;
        cout<<nl;
    } else {
        deque<string> d;
        if (single.size() > 0) {
            d.push_back(single[0]);
        }
        for(auto [f, s] : palin) {
            d.push_front(f);
            d.push_back(s);
        }

        cout<<d.size()*m<<nl;
        for(auto s : d) {
            cout<<s;
        }
        cout<<nl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1304/B