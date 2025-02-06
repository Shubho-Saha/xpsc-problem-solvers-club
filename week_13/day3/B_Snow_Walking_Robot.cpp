#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int up = 0, down = 0, left = 0, right = 0;
    for (auto c : s)
    {
        if (c == 'L')
            left++;
        else if (c == 'R')
            right++;
        else if (c == 'U')
            up++;
        else
            down++;
    }

    int minLeft = min(left, right);
    int minRight = min(left, right);
    int minUp = min(up, down);
    int minDown = min(up, down);

    if (minLeft == 0 && minUp == 0)
    {
        cout << 0 << nl;
    }
    else if (minLeft == 0 || minUp == 0)
    {
        cout << 2 << nl;
        if (minLeft == 0)
        {
            cout << "UD" << nl;
        }
        else
        {
            cout << "LR" << nl;
        }
    }
    else
    {
        int total = (minLeft * 2) + (minUp * 2);
        cout << total << nl;

        for (int i = 1; i <= minUp; i++)
        {
            cout << 'U';
        }
        for (int i = 1; i <= minRight; i++)
        {
            cout << 'R';
        }
        for (int i = 1; i <= minDown; i++)
        {
            cout << 'D';
        }
        for (int i = 1; i <= minLeft; i++)
        {
            cout << 'L';
        }

        cout << nl;
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

// https://codeforces.com/problemset/problem/1272/B