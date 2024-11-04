#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr);
    int n, m;
    cin>>n>>m;

    vector<int> vec(n+1);

    for(int i=1; i<= n; i++) {
        cin>>vec[i];
    }

    set<int> s;

    for(int i=n; i>=1; i--) {
        s.insert(vec[i]);
        vec[i] = s.size();
    }

    while(m--)
    {
        int pos;
        cin>>pos;
        cout<<vec[pos]<<'\n';
    }


    return 0;
}