#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    double x, y, z;
    cin>>x>>y>>z;
    double remainGame = 4- (x+y+z);

    double ourPoint = x + (y/2) + remainGame;
    double opponentPoint = z + (y/2);

    if (ourPoint > opponentPoint) {
        cout<<"Yes"<<nl;
    } else {
        cout<<"No"<<nl;
    }
    return 0;
}