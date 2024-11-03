#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<char> st;
    vector<char> vec;

    for(char c : str)
    {
        if (st.find(c) == st.end()) {
            vec.push_back(c);
            st.insert(c);
        }
    }

    sort(vec.begin(), vec.end());
    map<char, char> mp;
    int left = 0, right = vec.size()-1;
    while(left <= right)
    {
        mp[vec[left]] = vec[right];
        mp[vec[right]] = vec[left];
        left++; right--; 
    }

    for(int i=0; i<n; i++) {
        str[i] = mp[str[i]];
    }
    cout<<str<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}