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
        int n, k;
        cin>>n>>k;
        string s = "";
        for(int i=0; i<n; i++)
        {
            for(int i=0; i<k; i++) {
                char c = 'a' + i;
                s.push_back(c);
            }
        }

        cout<<s<<nl;
    }

    return 0;
}