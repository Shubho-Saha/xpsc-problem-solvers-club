#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int cnt = 1;
    while(true)
    {
        int n, q;
        cin>>n>>q;
        if (n==0 && q==0) {
            break;
        }
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        sort(all(v));
        cout<<"CASE# "<<cnt<<":"<<nl; cnt++;
        for(int k=1; k<=q; k++) 
        {
            int key; cin>>key;
            int l=0, r=n-1, mid, ans = -1;
            while(l<=r)
            {
                mid = l + (r-l)/2;
                if (v[mid] == key) {
                    ans = mid;
                    r = mid - 1;
                } else if (v[mid] < key) {
                    l = mid + 1;
                } else {
                    r = mid -1;
                }
            }
            if (ans == -1) {
                cout<<key<<" not found"<<nl;
            } else {
                cout<<key<<" found at "<<ans+1<<nl;
            }

        }
    }


    return 0;
}