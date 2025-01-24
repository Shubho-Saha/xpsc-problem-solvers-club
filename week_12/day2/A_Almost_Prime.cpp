#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 60;
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<bool> prime(mxN+1, true);
    vector<int> allprimes;
    for(int i=2; i*i<=mxN; i++) {
        if (prime[i]) {
            for(int k = i+i; k<=mxN; k+=i) {
                prime[k] = false;
            }
        }
    }

    for(int i=2; i<mxN; i++) {
        if (prime[i]) {
            allprimes.push_back(i);
        }
    }

    int res = 0;
    for(int x=6; x<=n; x++) {
        map<int, int> pf;
        int val = x;
        for(int k=0; k<allprimes.size(); k++) {    
            while(val % allprimes[k] == 0) {
                pf[allprimes[k]]++;
                val /= allprimes[k];
            }
        }
        if (val > 1) pf[val]++;
        if (pf.size() == 2) res++;
        
    }

    cout<<res<<nl;
    
    return 0;
}