#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e6+5;
vector<int> divisors(mxN);

int main()
{
    fastIO();

    for(int i=1; i<mxN; i++)
    {
        for(int j=i; j<mxN; j += i) {
            divisors[j]++;
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<divisors[n]<<nl;
    }

    return 0;
}