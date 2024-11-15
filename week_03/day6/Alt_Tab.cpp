#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t = 1;
    while(t--)
    {
        int n;
        cin>>n;
        stack<string> stck;
        set<string> st;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            stck.push(s);
        }

        while(!stck.empty())
        {
            string top = stck.top();
            if (st.count(top) == 0) {
                cout<<top[top.size()-2]<<top[top.size()-1];
            }
            st.insert(top);
            stck.pop();
        }
    }

    return 0;
}