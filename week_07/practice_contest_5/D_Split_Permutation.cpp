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

        if (n % 2 == 0) {
            int left = 1, right = n;
            while (left < right) 
            {
                cout<<left<<" "<<right<<" ";
                left++; 
                right--;
            }
            cout<<nl;
        } else {
            int left = 1, right = n-1;
            while(left < right)
            {
                cout<<left<<" "<<right<<" ";
                left++;
                right--;
            }
            cout<<n<<" "<<nl;
        }
    }

    return 0;
}