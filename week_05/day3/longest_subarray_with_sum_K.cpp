#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        map<long long, long long> mp;
        int n = arr.size();
        
        long long sum = 0, mxln = 0;
        for(int i=0; i<n; i++) {
            sum += arr[i];
            if (sum == k) {
                mxln = i+1;
            }
            long long rem = sum - k;
            if (mp.find(rem) != mp.end()) {
                mxln = max(mxln, i - mp[rem]);
            }
            
            if (mp.find(sum) == mp.end()) {
                mp.insert({sum, i});
            }
            
        }
        
        return mxln;
    }
};

int main()
{
    fastIO();
    Solution sol;
    vector<int> vec = {1, -1, 5, -2, 3};
    int k = 3;

    ll res = sol.lenOfLongestSubarr(vec, k);
    cout<<res;

    return 0;
}