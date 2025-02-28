#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isVowel(char c) {
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
    return false;
}
int main()
{
    fastIO();
    string s, t;
    cin>>s>>t;

    if (s.size() != t.size()) {
        cout<<"No"<<nl;
    } else {
        bool flag = true;
        for(int i=0; i<s.size(); i++) {
            bool f1 = isVowel(s[i]);
            bool f2 = isVowel(t[i]);
            if (f1 != f2){
                flag = false;
                break;
            }
        }

        if (flag) {
            cout<<"Yes"<<nl;
        } else {
            cout<<"No"<<nl;
        }
    }

    return 0;
}