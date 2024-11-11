#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, m;
    cin >> n >> m;
    vector<int> vecA(n), vecB(m);
    for (int i = 0; i < n; i++)
    {
        cin >> vecA[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> vecB[i];
    }

    for(int i=0, j=0; i<n, j<m; ) 
    {
        if (i == n-1 && vecA[i] < vecB[j]) {
            vecB[j] = n;
            j++;
            continue;
        }
        if (vecA[i] < vecB[j]) {
            i++;
        } else if (vecB[j] <= vecA[i]) {
            vecB[j] = i;
            j++;
        }
        
    }


    for (int x : vecB)
    {
        cout << x << " ";
    }

    return 0;
}