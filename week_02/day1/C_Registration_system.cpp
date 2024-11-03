#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string, int> mp;

    for(int i=0; i<n; i++) 
    {
        string s;
        cin>>s;
        if (mp.find(s) == mp.end()) {
            mp[s] = 0;
            cout<<"OK"<<'\n';
        } else {
            mp[s]++;
            string x = s + to_string(mp[s]);
            cout<<x<<'\n';
        }
    }

    return 0;
}