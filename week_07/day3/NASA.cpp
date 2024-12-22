#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 32768;
vector<int> allPalindrome;
bool isPalindrome(int x) {
    string s = to_string(x);
    string t = s;
    reverse(all(s));
    return s == t;
}


void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n), frequency(mxN);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
        frequency[vec[i]]++;
    }

    ll ans = n;
    for(auto ai : vec)
    {
        for(auto pval : allPalindrome)
        {
            int aj = (ai^pval);
            ans += frequency[aj];
        }
    }

    cout<<(ans/2)<<nl;
    
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    for(int i=0; i<=32767; i++)
    {
        if (isPalindrome(i)) {
            allPalindrome.push_back(i);
        }
    }

    while(t--) {
        solve();
    }

    return 0;
}