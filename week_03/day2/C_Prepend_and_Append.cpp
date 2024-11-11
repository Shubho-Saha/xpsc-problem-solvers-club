#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int left = 0, right = n-1;
        while(left <= right)
        {
            if (s[left] == s[right]) {
                break;
            } else {
                left++;
                right--;
            }
        }

        cout<<max(0, (right-left)+1)<<nl;
    }

    return 0;
}