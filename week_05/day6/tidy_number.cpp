#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve2 ()
{
    string str;
    cin>>str;

    int ln = str.size();
    int idx = -1;
    char crnt = str[ln-1];
    char cval = crnt;
    
    for(int i=ln-1; i>0; i--) {
        if (str[i-1] > crnt) {
            idx = i-1;
            char c = str[i-1];
            c--;
            crnt = c;
            cval = crnt;
        } else {
            crnt = str[i-1];
        }
    }

    if (idx == -1) {
        cout<<str<<nl;
        return;
    }

    for(int i=0; i<ln; i++) {
        if (i == idx) {
            str[i] = cval;
        }
        if (i > idx) {
            str[i] = '9';
        }
    }

    cout<<str<<nl;
}

void solve()
{
    ll n;
    cin >> n;

    string s = to_string(n);
    int ln = s.size();

    while (true)
    {
        bool flag = true;
        for (int i = 0; i < ln - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                flag = false;
                s[i]--;
                for (int j = i + 1; j < ln; j++)
                {
                    s[j] = '9';
                }
                break;
            }
        }
        if (flag)
            break;
    }

    ll num = stoll(s);
    cout << num << nl;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve2();
        // solve();
    }
    return 0;
}