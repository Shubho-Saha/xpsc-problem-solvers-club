#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    fastIO();
    int q;
    cin>>q;
    map<int, int> monocarp;
    map<int, deque<int>> polycarp;
    int count = 0;
    while(q--)
    {
        int x;
        cin>>x;
        if (x == 1)
        {
            int m;
            cin>>m;
            count++;
            monocarp[count] = m;
            polycarp[m].push_back(count);
        } else if (x == 2) {
           auto it = monocarp.begin();
           cout<<it->first<<" ";

           int x = it->second;
           monocarp.erase(it);
           polycarp[x].pop_front();
           if (polycarp[x].size() == 0) {
            polycarp.erase(x);
           }

        } else if (x == 3) {
            auto it = --polycarp.end();
            int x = it->second.front();
            cout<<x<<" ";
            it->second.pop_front();
            if (it->second.size() == 0) {
                polycarp.erase(it);
            }
            monocarp.erase(x);

        }
    }
    

    return 0;
}