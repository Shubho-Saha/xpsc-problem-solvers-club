#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    int ans=0;

    for(int i=1; i<=2; i++) {
        (a > b) ? ans += a-- : ans += b--;
    }
    cout<<ans;

    return 0;
}