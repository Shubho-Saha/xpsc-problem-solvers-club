#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << 2 << nl;
        cout << 1 << " " << 2 << nl;
        return;
    }

    int count = 0;
    int first, second;
    cout << 2 << nl;
    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {
            first = n - 2;
            second = n;
            cout << first << " " << second << nl;
            count++;
        }
        else if (count == 1)
        {
            first = n - 1;
            second = n - 1;
            cout << first << " " << second << nl;
            count++;
        }
        else if (count == 2)
        {
            first = n - 3;
            second = n - 1;
            cout << first << " " << second << nl;
            count++;
        }
        else if (count > 2)
        {
            first--;
            second--;
            cout << first << " " << second << nl;
        }
    }
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}