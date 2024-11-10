#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    multiset<int> mset;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mset.insert(x);
    }

    int count = 0;
    while(!mset.empty())
    {
        auto firstIt = mset.begin();
        int firstVal = *firstIt;

        while(true)
        {
            firstIt = mset.lower_bound(firstVal);
            auto secondIt = mset.upper_bound(*firstIt);
            if (secondIt == mset.end()) {
                mset.erase(firstIt);
                count++;
                break;
            }
            
            if (*secondIt == *firstIt+1)
            {
                mset.erase(firstIt);
                firstVal = *secondIt;
            } else if (*secondIt > *firstIt+1) {
                mset.erase(firstIt);
                count++;
                break;
            }
        }
    }

    cout<<count<<nl;

}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}