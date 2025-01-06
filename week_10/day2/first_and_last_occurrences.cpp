#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int firstOccurrence(vector<int> &v, int key) {
    int l=0, r=v.size()-1; 
    int ans = -1, mid;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if (v[mid] == key) {
            ans = mid;
            r = mid - 1;
        } else if (v[mid] < key) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int> &v, int key) {
    int l=0, r=v.size()-1;
    int ans = -1, mid;
    while(l<=r) {
        mid = l + (r-l)/2;
        if (v[mid] == key) {
            ans = mid;
            l = mid + 1;
        } else if (v[mid] > key) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    while(k--)
    {
        int key; cin>>key;
        int first = firstOccurrence(v, key);
        int last = lastOccurrence(v, key);
        cout<<first<<" "<<last<<nl;

    }

    return 0;
}