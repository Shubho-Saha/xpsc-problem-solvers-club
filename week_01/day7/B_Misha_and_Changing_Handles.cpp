#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, string> ans;
    map<string, string> has;

    for (int i = 0; i < n; i++)
    {
        string oldhdl, newhdl;
        cin >> oldhdl >> newhdl;
        if (has.find(oldhdl) == has.end())
        {
            ans[oldhdl] = newhdl;
            has[newhdl] = oldhdl;
        } else {
            ans[has[oldhdl]] = newhdl;
            has[newhdl] = has[oldhdl];
            has.erase(oldhdl);
        }
    }
    cout<<ans.size()<<endl;
    for(auto [key, val] : ans) {
        cout<<key<<" "<<val<<endl;
    }

    return 0;
}