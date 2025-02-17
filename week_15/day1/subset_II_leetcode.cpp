#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void gen(vector<int> &v, int idx, vector<vector<int>> &res, vector<int> &sub)
{
    if (idx == v.size())
    {
        res.push_back(sub);
        return;
    }

    sub.push_back(v[idx]);
    gen(v, idx + 1, res, sub);
    sub.pop_back();
    while (idx + 1 < v.size() && v[idx] == v[idx + 1])
    {
        idx++;
    }
    gen(v, idx + 1, res, sub);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;

    sort(all(v));
    vector<vector<int>> res;
    vector<int> sub;
    gen(v, 0, res, sub);

    for (auto subsets : res)
    {
        for (auto val : subsets)
        {
            cout << val << " ";
        }
        cout << nl;
    }

    cout << res.size() << nl;

    return 0;
}