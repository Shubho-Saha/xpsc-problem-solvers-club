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
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        sort(all(vec));
        int op1 = vec[n - 1] - vec[2];
        int op2 = vec[n - 3] - vec[0];
        int op3 = vec[n - 2] - vec[1];

        cout << min({op1, op2, op3}) << nl;
    }

    return 0;
}