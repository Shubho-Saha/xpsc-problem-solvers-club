#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void gen(vector<int> &v, int idx, vector<vector<int>> &res, vector<int> &sub) {
    if (idx == v.size()) {
        res.push_back(sub);
        return;
    }

    sub.push_back(v[idx]);
    gen(v, idx+1, res, sub);
    sub.pop_back();
    gen(v, idx+1, res, sub);
}
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    vector<vector<int>> res;
    vector<int> sub;

    gen(v, 0, res, sub);

    for(auto vec : res) {
        for(auto elem : vec) {
            cout<<elem<<" ";
        }
        cout<<nl;
    }


    return 0;
}