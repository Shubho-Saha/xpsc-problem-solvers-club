#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    map<int, int> like;
    map<int, int> dislike;
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    string str;
    cin>>str;

    for(int i=0; i<n; i++)
    {
        if (str[i] == '0') {
            dislike[vec[i]] = 0;
        } else {
            like[vec[i]] = 0;
        }
    }

    int count = 1;

    for(auto [key, val] : dislike) {
        dislike[key] = count;
        count++;
    }
   
    for(auto [key, val] : like) {
        like[key] = count;
        count++;
    }

    for(int i=0; i<n; i++) {
        if (dislike.count(vec[i]) > 0) {
            cout<<dislike[vec[i]]<<" ";
        }
        if (like.count(vec[i])> 0) {
            cout<<like[vec[i]]<<" ";
        }
    }
    cout<<nl;


}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}