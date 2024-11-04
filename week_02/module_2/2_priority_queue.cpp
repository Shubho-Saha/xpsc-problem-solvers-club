#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    
    priority_queue<int> pq;
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        pq.push(x);
    }

    cout<<"size: "<<pq.size()<<nl;
    if (pq.empty())
    {
        cout<<"Empty"<<nl;
    } else {
        cout<<"Not empty"<<nl;
    }

    while(!pq.empty())
    {
        cout<<pq.top()<<nl;
        pq.pop();
    }

    cout<<"size: "<<pq.size()<<nl;
    if (pq.empty())
    {
        cout<<"Empty"<<nl;
    } else {
        cout<<"Not empty"<<nl;
    }

    return 0;
}