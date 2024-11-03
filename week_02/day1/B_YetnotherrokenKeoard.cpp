#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> cap, small;
    vector<bool> track(s.size(), 1);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B' || s[i] == 'b')
        {
            if (s[i] == 'B')
            {
                if (!cap.empty())
                {
                    int x = cap.back();
                    track[x] = false;
                    cap.pop_back();
                }
                track[i] = false;
            }
            else
            {
                if (!small.empty())
                {
                    int x = small.back();
                    track[x] = false;
                    small.pop_back();
                }
                track[i] = false;
            }
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap.push_back(i);
            }
            else
            {
                small.push_back(i);
            }
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (track[i])
        {
            cout << s[i];
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}