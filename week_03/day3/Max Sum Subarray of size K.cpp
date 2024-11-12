#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        long long crrntSum = 0;
        for(int i=0; i<k; i++) {
            crrntSum += arr[i];
        }
        
        long long mxSum = crrntSum;
        for(int i=1; i<= arr.size()-k; i++)
        {
            crrntSum = crrntSum - arr[i-1] + arr[i+(k-1)];
            mxSum = max(crrntSum, mxSum);
        }
        return mxSum;
    }
};

int main()
{
    fastIO();
    

    return 0;
}