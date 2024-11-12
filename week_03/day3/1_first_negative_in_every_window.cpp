#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int> vec;
        for(int i=0; i<= arr.size()-k; i++) {
            bool flag = false;
            for(int j=i; j<i+k; j++) {
                if (arr[j] < 0) {
                    vec.push_back(arr[j]);
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                vec.push_back(0);
            }
        }
        return vec;
    }
};

int main()
{
    fastIO();
    

    return 0;
}

