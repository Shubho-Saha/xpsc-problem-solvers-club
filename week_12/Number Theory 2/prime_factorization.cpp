#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e3+10;
vector<bool> primes(mxN+1, true);
vector<int> allPrimes;
int main()
{
    fastIO();
    for(int i=2; i*i <= mxN; i++) {
        if (primes[i]) {
            for(int k = i+i; k<=mxN; k += i) {
                primes[k] = false;
            }
        } 
    }

    for(int i=2; i<=mxN; i++) {
        if (primes[i]) {
            allPrimes.push_back(i);
        }
    }

    int n;
    cin>>n;
    vector<int> pfactor;
    int idx = 0;
    while(n > 1)
    {
        while(n % allPrimes[idx] == 0) {
            pfactor.push_back(allPrimes[idx]);
            n /= allPrimes[idx];
        }
        idx++;
    }

    for(auto v : pfactor) {
        cout<<v<<" ";
    }
    cout<<nl;


    return 0;
}