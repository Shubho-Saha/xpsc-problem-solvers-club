#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<pair<string,string>, bool> mp;

    for(int i=0; i<n; i++) {
        string a, b;
        cin>>a>>b;
        mp[{a, b}] = true;
    }

    cout<<mp.size();
    return 0;
}