#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> vec(n);
    deque<int> dq;
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());

    dq.push_back(vec[0]);

    for(int i=1; i<n; i++) {
        if (vec[i] > dq.back()) {
            dq.pop_back();
            dq.push_back(vec[i]);
        } else {
            if (vec[i] > dq.front()) {
                dq.pop_front();
                dq.push_back(vec[i]);
            } else {
                dq.push_back(vec[i]);
            }
        }
    }

    cout<<dq.size();

    return 0;
}