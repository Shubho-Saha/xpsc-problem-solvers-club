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
    vector<int> res(n+2, 1);

    for(int i=2; i*i < n+2; i++) {
        if (res[i] == 1) {
            for(int k= i+i; k<n+2; k += i) {
                res[k] = 2;
            }
        }
    }

    if (n<3)
        cout<<1<<nl;
    else
        cout<<2<<nl;
        
    for(int i=2; i<n+2; i++) {
        cout<<res[i]<<" ";
    }
    cout<<nl;

    return 0;
}