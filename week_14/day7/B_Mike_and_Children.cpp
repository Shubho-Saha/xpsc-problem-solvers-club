#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    int up = v[n-1] + v[n-2], low = v[0] + v[1];

    int mxans = 0;
    for(int target = low; target <= up; target++)
    {
        int left = 0, right = n-1, cnt = 0;
        while(left < right)
        {
            int sum = v[left] + v[right];
            if (sum == target) {
                cnt++;
                left++, right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        mxans = max(mxans, cnt);
    }

    cout<<mxans<<nl;

    return 0;
}