#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    
    // set<int> st = {9, 4, 8, 9, 3, 8, 1, 3, 4, 7};
    
    // for(auto x : st) {
    //     cout<<x<<" ";
    // }
    // cout<<nl;
    // auto it = st.begin();
    // cout<<*it<<nl;
    // it = --st.end();
    // cout<<*it<<nl;

    int n;
    cin>>n;
    set<int> st;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.insert(val);
    }

    // for(set<int>::iterator it = st.begin(); it != st.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    for(auto it = st.begin(); it != st.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<nl;
    for(auto it = st.rbegin(); it != st.rend(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<nl<<"-----------"<<nl;
    auto it = st.lower_bound(18);
    if (it != st.end())
    {
        cout<<*it<<nl;
    } else {
        cout<<"out of bound"<<nl;
    }

    it = st.upper_bound(5);
    if (it != st.end())
    {
        cout<<*it<<nl;
    } else {
        cout<<"out of bound"<<nl;
    }

    // st.erase(4);
    // for(auto x : st)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<nl;
    // auto it = st.find(3);
    // if (it != st.end())
    // {
    //     cout<<*it<<nl;
    // } else {
    //     cout<<"Not found"<<nl;
    // }
    // st.erase(it);
    // for(auto x : st) {
    //     cout<<x<<" ";
    // }
    // cout<<nl;
    // cout<<st.count(5)<<nl;
    // it = st.find(2);
    // cout<<st.count(*it)<<nl;
    // cout<<st.size()<<nl;
    // st.clear();
    // cout<<st.size()<<nl;

    return 0;
}