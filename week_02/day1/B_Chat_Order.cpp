#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> nameList;
    set<string> st;

    for(int i=0; i<n; i++)
    {
        string name;
        cin>>name;
        nameList.push_back(name);
    }
    
    for(int i=n-1; i>=0; i--) {
        string s = nameList[i];
        if (st.find(s) == st.end()) {
            cout<<s<<'\n';
            st.insert(s);
        }
    }
    

    return 0;
}