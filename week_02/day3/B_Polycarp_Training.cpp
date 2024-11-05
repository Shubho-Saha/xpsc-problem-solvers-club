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

    vector<int> vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    sort(all(vec));
    int count = 0;
    int k=1;

    for(int i=0; i<n; i++)
    {
        if (vec[i] >= k) {
            count++;
            k++;
        }
    }
    cout<<count;

    return 0;
}