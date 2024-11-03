#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;
        if (s.size() == 1) {
            if (s[0] == 'z') {
                char c = 'a';
                cout<<s<<c<<endl;
            } else {
                char c = s[0] + 1;
                cout<<s<<c<<endl;
            }
        } else {
            bool flag = false;
            for(int i=0; i<s.size()-1; i++) {
                if (s[i] == s[i+1]) {
                    if (s[i] == 'z') {
                        char c = 'a';
                        s.insert(i+1, 1, c);
                        flag = true;
                    } else {
                        char c = s[i] + 1;
                        s.insert(i+1, 1, c);
                        flag = true;
                    }
                    break;
                }
            }
            if (!flag) {
                if (s[s.size()-1] == 'z') {
                    cout<<s<<"a"<<endl;
                } else {
                    char c = s[s.size()-1] + 1;
                    cout<<s<<c<<endl;
                }
            } else {
                cout<<s<<endl;
            }
            
        }
    }

    return 0;
}