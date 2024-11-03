#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n);

    for(int i=0; i<n; i++) {
        int m;
        cin>>m;
        vector<int> a;
        for(int j=0; j<m; j++) {
            int x;
            cin>>x;
            a.push_back(x);
        }
        vec[i] = a;
        
    }

    // for(auto v1: vec) {
    //     for(auto x: v1) {
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<n; i++) {
        for(int j=0; j<vec[i].size(); j++) {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}