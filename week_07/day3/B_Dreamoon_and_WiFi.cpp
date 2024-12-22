#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    string og, rcv;
    cin>>og>>rcv;

    int des = 0;
    for(auto c : og) 
    {
        if (c == '+') {
            des++;
        } else {
            des--;
        }
    }

    int crnt = 0;
    int unrec = 0;
    for(auto c : rcv)
    {
        if (c == '+') {
            crnt++;
        } else if (c == '-') {
            crnt--;
        } else {
            unrec++;
        }
    }

    if (unrec == 0) {
        if (crnt == des) {
            cout<<fixed<<setprecision(12)<<(1/static_cast<double>(1));
        } else {
            cout<<"0.0";
        }
        return 0;
    }

    int win = 0;
    int tmp = crnt;
    for(int i=0; i<(1<<unrec); i++)
    {
        crnt = tmp;
        for(int k=0; k<unrec; k++)
        {
            if ((i>>k)&1) {
                crnt++;
            } else {
                crnt--;
            }
        }
       
        if (crnt == des) {
            win++;
        }
    }

    double total = (1<<unrec);
    cout<<fixed<<setprecision(12)<<(win/total);

    return 0;
}