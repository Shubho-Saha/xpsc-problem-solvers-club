#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<ll> arr(n);
    vector<ll> oddArr;
    
    ll evenSum = 0;
    ll oddSum = 0;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddArr.push_back(arr[i]);
        }
    }
    sort(oddArr.begin(), oddArr.end());
    if (oddArr.size() % 2 == 0) {
        for(ll x:oddArr) {
            oddSum += x;
        }
    } else {
        for(int i=1; i<oddArr.size(); i++) {
            oddSum += oddArr[i];
        }
    }

    cout<<evenSum+oddSum;

    return 0;
}