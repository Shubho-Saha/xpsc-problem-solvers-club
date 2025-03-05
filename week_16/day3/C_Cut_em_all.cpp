#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e5+5;
int visited[mxN] = {false};
int cnt[mxN];
vector<int> adlist[mxN];

int DFS(int root)
{
    visited[root] = true;
    if (adlist[root].size() == 0) {
        cnt[root] = 1;
        return 1;
    }

    int sum = 0;
    for(auto child : adlist[root]) {
        if (visited[child] == false) {
            sum += DFS(child);
        }
    }
    sum++;
    cnt[root] = sum;
    return sum;
}

int main()
{
    fastIO();
    int n;
    cin>>n;

    for(int i=1; i<n; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    if (n % 2 != 0) {
        cout<<-1<<nl;
        return 0;
    }

    DFS(1);

    int ans = 0;
    for(int i=1; i<=n; i++) {
        if (cnt[i] % 2 == 0) {
            ans++;
        }
    }

    cout<<ans-1<<nl;

    return 0;
}