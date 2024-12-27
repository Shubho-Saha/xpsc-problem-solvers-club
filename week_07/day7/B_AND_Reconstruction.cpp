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
        vector<int> b(n-1);
        for(int i=0; i<n-1; i++) {
            cin>>b[i];
        }

        vector<int> a;
        a.push_back(b[0]);
        for(int i=0; i<n-2; i++) {
            a.push_back(b[i]|b[i+1]);
        }
        a.push_back(b[n-2]);

        bool flag = true;
        for(int i=0; i<n-1; i++) {
            if ((a[i]&a[i+1])!= b[i]) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            for(auto x : a) {
                cout<<x<<" ";
            }
            cout<<nl;
        } else {
            cout<<-1<<nl;
        }
    }

    return 0;
}