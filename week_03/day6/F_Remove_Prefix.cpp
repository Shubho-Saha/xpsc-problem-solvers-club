#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);

        for(int i=0; i<n; i++) cin>>vec[i];

        set<int> st;
        bool flag = false;
        for(int i=n-1; i>=0; i--) {
            if (st.count(vec[i]) == 0) {
                st.insert(vec[i]);
            } else {
                cout<<i+1<<nl;
                flag = true;
                break;
            }
        }
        if (!flag) cout<<0<<nl;
    }

    return 0;
}