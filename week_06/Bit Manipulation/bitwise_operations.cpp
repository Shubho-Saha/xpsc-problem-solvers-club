#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool kth_bit_on_off(int n, int k) {
    return (n>>k) & 1;
}

void print_on_off_bits(int n) {
    for(int k=15; k>=0; k--) {
        cout<<kth_bit_on_off(n, k)<<" ";
    }
    cout<<nl;
}

int turn_kth_bit_on(int n, int k) {
    return n | (1 << k);
}

int turn_off_kth_bit(int n, int k) {
    return n & ~(1<<k);
}

int toggle_kth_bit(int n, int k) {
    return n ^ (1<<k);
}
int main()
{
    fastIO();
    int n = 43;
    // cout<<kth_bit_on_off(n, 0)<<nl;
    // print_on_off_bits(n);
    // cout<<turn_kth_bit_on(n, 2)<<nl;
    // cout<<turn_off_kth_bit(n, 3)<<nl;
    // cout<<toggle_kth_bit(n, 1)<<nl;

    int mask = ~0;
    cout<<mask<<nl;

    return 0;
}