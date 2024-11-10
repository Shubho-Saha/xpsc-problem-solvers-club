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
        vector<int> vec(n);
        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
        }
        for(int i=0; i<n; i++)
        {
            int bi;
            cin>>bi;
            while(bi--)
            {
                char c;
                cin>>c;
                if (c=='U') {
                    if (vec[i] == 0) {
                        vec[i] = 9;
                    } else {
                        vec[i]--;
                    }
                } else {
                    if (vec[i] == 9) {
                        vec[i] = 0;
                    } else {
                        vec[i]++;
                    }
                }
            }
        }
        for(int x : vec) 
        {
            cout<<x<<" ";
        }
        cout<<nl;
    }

    return 0;
}