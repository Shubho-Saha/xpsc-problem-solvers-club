#include <bits/stdc++.h>
using namespace std;
int main()
{
    // *****need clarification****
    // int n;
    // cin>>n;
    // vector<int> vec(n);
    // cout<<vec.size()<<endl;

    // for(int i=1; i<=n; i++) {
    //     cin>>vec[i];
    // }

    // for(int i=1; i<=n; i++) {
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;
    // cout<<vec[5]<<endl;
    // cout<<vec[0]<<endl;
    // cout<<vec.size()<<endl;


    // push_back(), iterator, front(), back() and resize()
    // vector<int> v;
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++) {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }

    // for(auto it=v.begin(); it != v.end(); it++) {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // cout<<v.front()<<endl<<v.back()<<endl;
    // cout<<v.empty()<<endl<<"----------"<<endl;
    // v.resize(10, 7);
    // for(int x: v) {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // v.resize(7);
    // for(int x : v) {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // v.resize(10);
    // for(int x: v) {
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    for(auto it=vec.rbegin(); it != vec.rend(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = vec.end()-1; it >= vec.begin()+1; it--) {
        cout<<*it<<" ";
    }

    return 0;
}