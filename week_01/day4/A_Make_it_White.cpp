#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string strip;
    cin>>strip;

    int ln = 0;
    int firstIdx;

    for(int i=0; i<strip.size(); i++) {
        if (strip[i] == 'B' && ln == 0) {
            firstIdx = i;
            ln = 1;
        }
        if (strip[i] == 'B' && ln != 0) {
            ln = (i - firstIdx) + 1;
        }
    }
    cout<<ln<<'\n';
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