#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int length = to_string(n).size();

    if (length == 1) {
        cout<<"000"+to_string(n);
    } else if (length == 2) {
        cout<<"00"+to_string(n);
    } else if (length == 3) {
        cout<<"0"+to_string(n);
    } else {
        cout<<to_string(n);
    }
    

    return 0;
}