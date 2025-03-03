#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int cnt;
void func(vector<int>&v, int ln, int mid)
{
    if (ln == 0) return;
    int rightL = mid, rightR = mid+ln-1;
    int leftL = mid-ln, leftR = mid-1;

    int leftMax = 0, RightMin = INT_MAX;
    for(int i=leftL; i<= leftR; i++) {
        leftMax = max(leftMax, v[i]);
    }
    for(int i=rightL; i<=rightR; i++) {
        RightMin = min(RightMin, v[i]);
    }

    if (leftMax > RightMin) {
        cnt++;
        for(int i=leftL, j=rightL; i<=leftR, j<=rightR; i++, j++) {
            swap(v[i], v[j]);
        }
    }
    ln = ln/2;
    func(v, ln, mid+ln);
    func(v, ln, mid-ln);
    
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    int ln = n / 2, mid = n/2;
    cnt = 0;
    func(v, ln, mid);

    if (is_sorted(all(v))) {
        cout<<cnt<<nl;
    } else {
        cout<<-1<<nl;
    }
    
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}