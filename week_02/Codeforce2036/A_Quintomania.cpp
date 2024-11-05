#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    bool flag = true;
    for(int i=0; i<n-1; i++) {
        if (abs(vec[i]-vec[i+1]) != 5 && abs(vec[i]-vec[i+1]) != 7) {
            flag = false;
            break;
        }
    }
    if (flag )
        cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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