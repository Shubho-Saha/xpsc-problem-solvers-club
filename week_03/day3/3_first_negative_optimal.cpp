#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> vec(n);

    for(int i=0; i<n; i++) cin>>vec[i];

    queue<int> q;
    int l=0, r=0;
    vector<int> ans;

    while(r < n)
    {
        if (vec[r] < 0) {
            q.push(vec[r]);
        }

        if ((r-l)+1 == k) 
        {
            if (!q.empty()) {
                ans.push_back(q.front());
                if (vec[l] == q.front()) {
                    q.pop();
                }
                l++;
                r++;
            } else {
                ans.push_back(0);
                l++; r++;
            }

        } else {
            r++;
        }
    }
    for(int x : ans) {
        cout<<x <<" ";
    }

    return 0;
}