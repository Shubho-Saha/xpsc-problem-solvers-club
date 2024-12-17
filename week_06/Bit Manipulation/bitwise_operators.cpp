#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int a = 7;
    int b = 9;

    cout<<(a&b)<<nl; // AND operation
    cout<<(a|b)<<nl; // OR operation
    cout<<(a^b)<<nl; // XOR operation

    cout<<(1<<4)<<nl; // left-shift
    cout<<(7>>1)<<nl; // right-shift

    return 0;
}