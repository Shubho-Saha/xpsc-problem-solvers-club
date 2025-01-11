#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    auto isGood = [&](int distance) {
        int positionCnt = 1;
        int prevCoordinate = v[0];
        int crntDis = 0;

        for(int i=1; i<n; i++) {
            crntDis = v[i] - prevCoordinate;
            if (crntDis >= distance) {
                positionCnt++;
                prevCoordinate = v[i];
            }
        }
        
        return positionCnt >= k;
    };

    int l=0, r = 1e9+10, mid;
    while(r > l+1)
    {
        mid = l + (r-l)/2;
        if(isGood(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout<<l;

    return 0;
}