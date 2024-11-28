#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int ln = n*n;
    vector<int> vec(ln);
    int even = 0, odd = 1;
    for(int i=0; i<ln; i++) {
        if (i % 2 == 0) {
            vec[i] = n*n - even;
            even++;
        } else {
            vec[i] = odd;
            odd++;
        }
    }

    int x = n/2;
    int a = 2;
    while(x--)
    {
        int r = n*a-1;
        int l = n*a-n;
        while (l < r) {
            swap(vec[l], vec[r]);
            l++; r--;
        }
        a += 2;
    }

    for(int i=0; i<ln; i += n) {
        for(int j=i; j<n+i; j++) {
            cout<<vec[j]<<" ";
        }
        cout<<nl;
    }
}
int main()
{
    fastIO();
    int t;
    t = 1;
    cin>>t;
    while(t--) 
    {
        solve();
    }

    return 0;
}