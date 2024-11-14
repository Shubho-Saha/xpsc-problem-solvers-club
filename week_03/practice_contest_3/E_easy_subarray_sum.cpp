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
        int positiveFirst = -1;
        int positiveSecond = -1;

        for(int i=0; i<n; i++) {
            cin>>vec[i];
            if (vec[i] > 0 && positiveFirst == -1) {
                positiveFirst = i;
            }
            if (vec[i] > 0) {
                positiveSecond = i;
            }
        }
        if (positiveFirst == positiveSecond) {
            cout<<0<<nl;
        } else {
            int negCount = 0;
            for(int i=positiveFirst; i<=positiveSecond; i++) {
                if (vec[i] < 0) {
                    negCount++;
                }
            }
            cout<<negCount<<nl;
        }
    }

    return 0;
}