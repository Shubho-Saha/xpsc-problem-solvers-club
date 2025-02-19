#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

set<int> negDiag, posDiag, colst;
void solve(int row, vector<string> &board, vector<vector<string>> &res, int n) {
    if (row == n) {
        res.push_back(board);
        return;
    }

    for(int col=0; col<n; col++) {
        if (colst.count(col) == 0 && negDiag.count(col-row) == 0 && posDiag.count(col+row) == 0) {
            board[row][col] = 'Q';
            colst.insert(col);
            negDiag.insert(col-row);
            posDiag.insert(col+row);
            solve(row+1, board, res, n);
            board[row][col] = '.';
            colst.erase(col);
            negDiag.erase(col-row);
            posDiag.erase(col+row);
        }
    }

}
int main()
{
    fastIO();
    int n;
    cin>>n;

    vector<vector<string>> res;
    vector<string> board(n);
    string s(n, '.');
    for(int i=0; i<n; i++) {
        board[i] = s;
    }

    solve(0, board, res, n);    
    for(auto b : res) {
        for(auto s : b) {
            cout<<s<<" ";
        }
        cout<<nl;
    }
    
    return 0;
}