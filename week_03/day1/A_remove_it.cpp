#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, x;
    cin>>n>>x;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        if (val != x)
        {
            cout<<val<<" ";
        }
    }

    return 0;
}