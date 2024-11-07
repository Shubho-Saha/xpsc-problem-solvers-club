#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n+1);
    set<int> st;

    for(int i=1; i<=n; i++) 
    {
        cin>>vec[i];
        st.insert(vec[i]);
    }
    int l=1, r=n;
    while (l < r)
    {
        bool flag = true;
        if (vec[l] == *st.begin() || vec[l] == *st.rbegin()) {
            st.erase(vec[l]);
            l++;
            flag = false;
        }
        if (vec[r] == *st.begin() || vec[r] == *st.rbegin())
        {
            st.erase(vec[r]);
            r--;
            flag = false;
        }
        if (flag) break;
    }
    if (l < r) {
        cout<<l<<" "<<r<<nl;
    } else {
        cout<<-1<<nl;
    }
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}