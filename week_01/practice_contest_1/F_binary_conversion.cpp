#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    string s, t;
    cin>>s>>t;
    int match=0;
    int notMatch = 0;
    int one = 0;
    int zero = 0;
    int mOne = 0;
    int mZero = 0;
    for(int i=0; i<n; i++) {
        if (s[i] != t[i]) {
            notMatch++;
            if (s[i] == '1') {
                one++;
            } else {
                zero++;
            }
        } else {
            match++;
            if (s[i] == '1') {
                mOne++;
            } else {
                mZero++;
            }
        }
    }
    
    if (notMatch % 2 != 0 || one != zero) {
        cout<<"no"<<endl;
    } else {
        int x = notMatch / 2;
        if (x > k) {
            cout<<"no"<<endl;
        } else if ( x == k) {
            cout<<"yes"<<endl;
        } else {
            if ((mOne+one) > 1 || (mZero+zero) > 1 || (k-x)%2 == 0) {
                cout<<"yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }

    }
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}