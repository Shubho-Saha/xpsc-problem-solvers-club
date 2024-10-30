#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int> vec;

    int sereja=0, dima=0;

    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i=0; i<n; i++) {
        if (i % 2 == 0) {
            if (vec.front() > vec.back()) {
                sereja += vec.front();
                vec.pop_front();
            } else {
                sereja += vec.back();
                vec.pop_back();
            }
        } else {
            if (vec.front() > vec.back()) {
                dima += vec.front();
                vec.pop_front();
            } else {
                dima += vec.back();
                vec.pop_back();
            }
        }
    }
    cout<<sereja<<" "<<dima;

    return 0;
}