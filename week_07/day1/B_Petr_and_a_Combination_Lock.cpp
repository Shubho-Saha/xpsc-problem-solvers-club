#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    for(int i=0; i<(1<<n); i++) 
    {
        int sum = 0;
        for(int k=n-1; k>=0; k--) {
            if ((i>>k)&1) {
                sum += vec[k];
            } else {
                sum -= vec[k];
            }
            sum = sum % 360;
        }
        if (sum == 0) {
            cout<<"YES"<<nl;
            return 0;
        }
    }

    cout<<"NO"<<nl;

    return 0;
}