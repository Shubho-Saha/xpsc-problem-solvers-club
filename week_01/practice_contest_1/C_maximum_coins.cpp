#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin>>n>>x;

    int lossMoney=0, winMoney=0;

    for(int i=0; i<n-x; i++) {
        lossMoney += pow(2, i+1);
    }

    for(int i=n-x; i<n; i++) {
        winMoney += pow(2, i+1);
    }

    cout<<winMoney - lossMoney<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}