#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void gen(vector<int> &v, int idx, int need, vector<vector<int>> &res, vector<int>&sub)
{
    if (need == 0) {
        res.push_back(sub);
        return;
    }
    if (idx == v.size()) return;

    if (v[idx] <= need) {
        sub.push_back(v[idx]);
        gen(v, idx, need-v[idx], res, sub);
        sub.pop_back();
        while(idx+1 < v.size() && v[idx] == v[idx+1]) {
            idx++;
        }
        gen(v, idx+1, need, res, sub);
    }
}
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    int target; cin>>target;
    sort(v.begin(), v.end());

    // the way i've implemented the gen function it will work even if the input array contains duplicate elements.

    vector<vector<int>> res;
    vector<int> sub;
    gen(v, 0, target, res, sub);

    for(auto vec : res) {
        for(auto el : vec) {
            cout<<el<<" ";
        }
        cout<<nl;
    }


    return 0;
}