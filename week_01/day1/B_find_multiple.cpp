#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    bool flag = false;

    int smallVal, largeVal, ans;
    if (a<b) {
        smallVal = a;
        largeVal = b;
    } else {
        smallVal = b;
        largeVal = a;
    }

    for(int i = smallVal; i<= largeVal; i++) {
        if (i % c == 0) {
            flag = true;
            ans = i;
            break;
        }
    }

    if (flag )
        cout<<ans;
    else cout<<-1;

    return 0;
}