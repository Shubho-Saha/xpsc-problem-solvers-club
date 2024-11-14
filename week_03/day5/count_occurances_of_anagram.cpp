#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    string pat, txt;
    cin>>pat>>txt;

    vector<int> freq(27, 0);
    vector<int> test(27, 0);
    for(char c : pat) {
        freq[c-'a']++;
    }

    int l = 0, r=0;
    int cnt = 0;
    while(r < txt.size())
    {
        test[txt[r] - 'a']++;
        if ((r-l)+1 == pat.size())
        {
            bool flag = true;
            for(int i = 0; i< 27; i++) {
                if (test[i] != freq[i]) {
                    flag = false;
                }
            }
            if (flag) cnt++;
            test[txt[l]-'a']--;
            l++;
        }
        r++;
    }
    cout<<cnt<<nl;

    return 0;
}