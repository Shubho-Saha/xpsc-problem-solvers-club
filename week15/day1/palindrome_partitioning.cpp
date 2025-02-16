#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isPalindrome(string &s, int l, int r) {
    while (l <= r)
    {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

void partition(int idx, string &str, vector<vector<string>> &res, vector<string> &s, int n) {
    if (idx == n) {
        res.push_back(s);
        return;
    }

    for(int i=idx; i<n; i++) {
        if (isPalindrome(str, idx, i)) {
            s.push_back(str.substr(idx, i-idx+1));
            partition(i+1, str, res, s, n);
            s.pop_back();
        }
    }

}
int main()
{
    fastIO();
    string str;
    cin>>str;

    vector<vector<string>> res;
    vector<string> s;
    int n = str.size();

    partition(0, str, res, s, n);

    for(auto vec : res) {
        for(auto s : vec) {
            cout<<s<<" ";
        }
        cout<<nl;
    }

    return 0;
}