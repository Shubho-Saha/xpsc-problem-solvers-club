#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool isPrime(ll n)
{
    bool flag = true;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n == 1)
        return false;
    else
        return flag;
}

int main()
{
    fastIO();
    ll n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime" << nl;
    }
    else
    {
        cout << "Not Prime" << nl;
    }

    return 0;
}