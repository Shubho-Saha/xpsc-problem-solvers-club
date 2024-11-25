#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int sz = s.size();
        map<char, int> mp;
        int l=0, mxln=-1;     
        for(int r=0; r<sz; r++)
        {
            mp[s[r]]++;
            while(mp.size() > k) 
            {
                char key = s[l];
                mp[key]--;
                if (mp[key] == 0) {
                    mp.erase(key);
                }
                l++;
            }
            
            if (mp.size() == k) {
                mxln = max(mxln, r-l+1);
            }
        }       
        return mxln;      
    }
};
int main()
{
    fastIO();
    string s = "abcaaabdeddceed";
    int k = 3;
    Solution sol;
    int result = sol.longestKSubstr(s, k);

    cout<<result<<nl;

    return 0;
}

