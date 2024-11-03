#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;

    map<string, string> mp;

    for(int i=0; i<n; i++)
    {
        string name, ip;
        cin>>name>>ip;
        ip += ";";
        mp[ip] = name;
    }

    for(int i=0; i<m; i++)
    {
        string command, ip;
        cin>>command>>ip;
        
        cout<<command<<" "<<ip<<" ";
        cout<<"#"<<mp[ip]<<'\n';
    }

    return 0;
}