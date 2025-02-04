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
    vector<int> a(n), b(n), c(n);

    for(auto &it : a) cin>>it;
    for(auto &it : b) cin>>it;

    for(int i=0; i<n; i++) {
        c[i] = a[i] - b[i];
    }

    sort(all(c));
    ll sum = 0;
    int left = 0, right = n-1;
    while(left < right)
    {
        if (c[left] + c[right] > 0) {
            sum += (right - left);
            right--;
        } else {
            left++;
        }
    }

    cout<<sum<<nl;

    return 0;
}