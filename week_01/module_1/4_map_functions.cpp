#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k, v;
        cin >> k >> v;
        mp[k] = v;
    }

    for (auto [key, value] : mp)
    {
        cout << key << " -> " << value << '\n';
    }

    // cout<<mp[25]<<endl;

    // auto it = mp.find(13);
    // cout<<it->first<<" "<<it->second<<endl<<endl;

    // auto it = mp.find(151);
    // if (it != mp.end())
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // else
    // {
    //     cout << "Key not found" << endl;
    // }
    // cout << endl;

    // it = mp.find(15);
    // if (it != mp.end()) {
    //     cout<<"found"<<endl;
    //     mp.erase(it);
    // } else {
    //     cout<<"key doesn't exist"<<endl;
    // }

    // for (auto it = mp.rbegin(); it != mp.rend(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    mp[9] = 99;
    
    auto it = mp.lower_bound(9);
    cout<<it->first<<" "<<it->second<<endl;

    it = mp.upper_bound(10);
    cout<<it->first<<" "<<it->second<<endl;

    return 0;
}