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
    int n = s.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        sum += x;
    }

    if (sum % 9 == 0)
    {
        cout << "YES" << nl;
        return;
    }

    int twoCnt = 0, threeCnt = 0;
    for (auto c : s)
    {
        if (c == '2')
            twoCnt++;
        if (c == '3')
            threeCnt++;
    }

    sum = sum % 9;
    bool flag = false;
    for(int i=0; i<= min(twoCnt, 8); i++) {
        for(int k=0; k<= min(threeCnt, 8); k++) {
            int tmp = (i*2) + (k*6);
            if ((tmp+sum) % 9 == 0) {
                flag = true;
                break;
            }
        }
    }
    if (flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
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