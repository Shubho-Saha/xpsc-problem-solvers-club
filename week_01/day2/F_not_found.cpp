#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    bool alpha[26] = {false};
    bool flag = false;

    for(char c:s) {
        alpha[c - 'a'] = true;
    }

    for(int i=0; i<26; i++) {
        if (alpha[i] == false) {
            cout<<char(i+'a');
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout<<"None";
    }


    return 0;
}