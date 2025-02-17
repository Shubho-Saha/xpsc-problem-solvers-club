#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void gen(vector<int> &v, vector<int> &sub, vector<vector<int>> &res, int idx) {

    if (idx == v.size()) {
        res.push_back(sub);
        return;
    }

    for(int i=idx; i<v.size(); i++) {
        sub.push_back(v[i]);
        gen(v, sub, res, i+1);
        sub.pop_back();
    }
    res.push_back(sub);
}
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<vector<int>> res;
    vector<int> sub;
    gen(v, sub, res, 0);

    for(auto vec : res) {
        for(auto x : vec) {
            cout<<x<<" ";
        }
        cout<<nl;
    }



    return 0;
}