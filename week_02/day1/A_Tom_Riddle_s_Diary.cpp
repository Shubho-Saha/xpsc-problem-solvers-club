#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    set<string> st;

    while(n--)
    {
        string name;
        cin>>name;
        if (st.find(name) == st.end()) {
            cout<<"NO"<<'\n';
            st.insert(name);
        } else {
            cout<<"YES"<<'\n';
        }
    }

    return 0;
}