#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> v;
    int cnt = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            v.push_back(n - i - cnt), cnt++;
    }
    reverse(v.begin(), v.end());

    for(auto x : v) {
        cout<<x<<" ";
    }
    cout<<endl;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v.empty())
            ans = -1;
        else
            ans += v.back(), v.pop_back();
        cout << ans << " ";
    }
    cout << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    testCase();
  }
  return 0;
}