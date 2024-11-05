#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> vec(k+10, 0);
    int brandCnt = 0;
    int total = 0;

    for(int i=0; i<k; i++)
    {
        int bi, ci;
        cin>>bi>>ci;
        if (vec[bi] == 0) {
            brandCnt++;
        }
        vec[bi] += ci;   
        total += ci;
    }
    if ( n >= brandCnt) {
        cout<<total<<'\n';
    } else {
        
        sort(vec.begin(), vec.end());
        int x = brandCnt - n;
        for(int val : vec) {
            if (x == 0) break;
            if (val != 0) {
                total -= val;
                x--;
            }
        }
        cout<<total<<'\n';
    }
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