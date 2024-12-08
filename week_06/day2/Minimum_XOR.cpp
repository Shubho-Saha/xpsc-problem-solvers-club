#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int xorSum = 0;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
            if (i == 0)
            {
                xorSum = x;
            }
            else
            {
                xorSum = xorSum ^ x;
            }
        }

        int minXor = xorSum;
        for(int i=0; i<n; i++) {
            int newXor = xorSum ^ vec[i];
            minXor = min(minXor, newXor);
        }
        cout<<minXor<<nl;
        

    }

    return 0;
}