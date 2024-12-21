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
        ll n;
        cin>>n;
        ll temp = n;

        ll bitCnt = 0;
        while(temp >= 1)
        {
            temp = temp >> 1;
            bitCnt++;
        }
        
        set<ll> st;
        st.insert(n);
        for(int i=0; i<bitCnt; i++) 
        {
            ll mask = ~(1LL << i);
            ll val = n & mask;
            if (val != 0) {
                st.insert(val);
            }
        }

        cout<<st.size()<<nl;
        for(auto x : st) {
            cout<<x<<" ";
        }
        cout<<nl;

    }

    return 0;
}