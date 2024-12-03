#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    string str;
    cin>>str;

    vector<int> gap;
    int left = 0;
    bool oneFound = false;
    for(int i=0; i<n; i++) {
        if (str[i] == '1') {
            if (gap.size() == 0) {
                gap.push_back(i-left);
                oneFound = true;
                left = i;
            } else {
                gap.push_back(i-left-1);
                oneFound = true;
                left = i;
            }     
        }
    }

    if (!oneFound) {
        int availGap = n-1;
        int cnt = 1;
        int requireGap = k+1;
        while(availGap >= requireGap) {
            cnt++;
            availGap -= (k+1);
        }
        cout<<cnt<<nl;
        return;
    }

    int cnt = 0;
    int requireGap;
    for(int i=0; i<gap.size(); i++) {
        int availGap = gap[i];
        if (i==0) {
            requireGap = k+1;
        } else {
            requireGap = 2*k + 1;
        }
        
        while(availGap >= requireGap){
            cnt++;
            availGap -= (k+1);
        }         
    }
    
    if (str[n-1] != '1') {
        int availGap = n-1-left;
        int requireGap = k + 1;
        while(availGap >= requireGap)
        {
            cnt++;
            availGap -= (k+1);
        }
    }

    cout<<cnt<<nl;

}
int main()
{
    fastIO();
    int t = 1; 
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}