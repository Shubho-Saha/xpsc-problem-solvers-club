#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    string s;
    cin>>s;
    ll Nb, Ns, Nc;
    cin>>Nb>>Ns>>Nc;
    ll Pb, Ps, Pc;
    cin>>Pb>>Ps>>Pc;
    ll moneyHas; cin>>moneyHas;

    ll BforOne=0, SforOne = 0, CforOne = 0;
    for(auto c : s) {
        if (c == 'B') {
            BforOne++;
        } else if (c == 'S') {
            SforOne++;
        } else {
            CforOne++;
        }
    }

    auto ok = [&] (ll BurgerCnt) {
        ll BreadNeed = max(0ll, (BurgerCnt*BforOne) - Nb);
        ll SausageNeed = max(0ll, (BurgerCnt*SforOne) - Ns);
        ll CheeseNeed = max(0ll, (BurgerCnt*CforOne) - Nc);

        ll moneyNeed = (BreadNeed*Pb) + (SausageNeed*Ps) + (CheeseNeed*Pc);

        return moneyNeed <= moneyHas;
    };

    ll l=0, r = 1e12+200, mid;
    while(r > l + 1) {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout<<l;

    return 0;
}