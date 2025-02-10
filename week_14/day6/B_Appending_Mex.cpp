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
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    bool flag = true;
    int crntmx = -1;
    for(int i=0; i<n; i++) {
        if (v[i] > crntmx+1) {
            cout<<i+1;
            flag = false;
            break;
        } else {
            crntmx = max(crntmx, v[i]);
        }
    }

    if (flag) {
        cout<<-1<<nl;
    }

    return 0;
}