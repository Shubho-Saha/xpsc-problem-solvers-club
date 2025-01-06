#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int leftIndex(vector<int> &v, int key)
{
    int l=0, r=v.size()-1;
    int ans = -1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if (v[mid] >= key) {
            ans = mid;
            r = mid -1;
        } else {
            l = mid +1;
        }
    }
    if (ans == -1) {
        return v.size()+1;
    } else {
        return ans+1;
    }
}

int rightIndex(vector<int> &v, int key) {
    int l=0, r = v.size()-1;
    int ans = -1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if (v[mid] <= key) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if (ans == -1) {
        return -1;
    } else {
        return ans+1;
    }
}
int main()
{
    fastIO();
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));

    int k; cin>>k;
    while(k--)
    {
        int left, right;
        cin>>left>>right;
        int leftIdx = leftIndex(v, left);
        int rightIdx = rightIndex(v, right);
        if (rightIdx < leftIdx) {
            cout<<0<<" ";
        } else {
            cout<<rightIdx-leftIdx+1<<" ";
        }
    }

    return 0;
}