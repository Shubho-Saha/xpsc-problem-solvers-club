#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    ll sum=0;
    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0) {
        cout<<n<<'\n';
    } else {
        int ln1=0, ln2=0;
        ll tmpSum = sum;
        for(int i=0; i<n; i++) {
            tmpSum -= arr[i];
            if (tmpSum % 2 == 0) {
                ln1=n-(i+1);
                break;
            }
        }
        ll tmpSum2 = sum;
        for(int i=n-1; i>=0; i--) {
            tmpSum2 -= arr[i];

            if (tmpSum2 % 2 == 0) {
                ln2 = i;
                break;
            }
        }

        cout<<max(ln1, ln2)<<'\n';
    }

}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
