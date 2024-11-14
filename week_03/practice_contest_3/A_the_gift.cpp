#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int a, b, c;
    cin>>a>>b>>c;

    if (a+c >= b) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}