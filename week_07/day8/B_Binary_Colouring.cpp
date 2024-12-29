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

        int highbit = __lg(n);
        deque<int> dq(highbit+2, 0);

        for(int k=0; k<=highbit; k++)
        {
            if ((n>>k)&1) {
                dq[k] = 1;
            } else {
                dq[k] = 0;
            }
        }

        
        while(true)
        {
            bool flag = false;
            int first = -1, last = -1;
            
            for(int i=0; i<dq.size(); i++) {
                if (dq[i] == 1 && first == -1 && last == -1) {
                    first = i;
                } else if (dq[i] == 1 && first != -1) {
                    last = i;
                } else if (dq[i] == 0 && last != -1 && first != -1) {
                    flag = true;
                    break;
                } else if (dq[i] == 0 && first != -1 && last == -1) {
                    first = -1;
                }
            }

            if (flag) {
                for(int i=first; i<=last+1; i++) {
                    if (i==first) {
                        dq[i] = -1;
                    } else if (i == last+1) {
                        dq[i] = 1;
                    } else {
                        dq[i] = 0;
                    }
                }
            } else {
                break;
            }

        }
        int sz;
        if (dq[dq.size()-1] == 0) {
            sz = dq.size() -1;
        } else {
            sz = dq.size();
        }
        cout<<sz<<nl;
        for(int i=0; i<dq.size(); i++) {
            if (i == dq.size()-1 && dq[i] == 0) continue;
            cout<<dq[i]<<" ";
        }
        cout<<nl;
    }

    return 0;
}