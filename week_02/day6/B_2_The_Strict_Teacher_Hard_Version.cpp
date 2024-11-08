#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m, q;
    cin>>n>>m>>q;
    set<int> tcells;
    for(int i=0; i<m; i++) {
        int cellNo;
        cin>>cellNo;
        tcells.insert(cellNo);
    }

    while(q--)
    {
        int dcell;
        cin>>dcell;
        bool leftFlag, rightFlag;
        int leftTeacher, rightTeacher;

        auto it = tcells.lower_bound(dcell);
        if (it == tcells.end()) {
            rightFlag = false;
            rightTeacher = n;
        } else {
            rightFlag = true;
            rightTeacher = *it;
        }
        
        if (it == tcells.begin()) {
            leftFlag = false;
            leftTeacher = 1;
        } else {
            leftFlag = true;
            leftTeacher = *(--it);
        }

        if (leftFlag == false && rightFlag==true)
        {
            cout<<rightTeacher - 1<<nl;
        } else if (leftFlag == true && rightFlag == false) {
            cout<<n-leftTeacher<<nl;
        } else {
            cout<<(rightTeacher-leftTeacher)/2<<nl;
        }
    }
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}