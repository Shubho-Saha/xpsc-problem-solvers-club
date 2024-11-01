#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<string, int, double> t = make_tuple("mrinmoy", 28, 55.12345678);

    // cout << get<0>(t) << " " << get<1>(t) << " " << fixed << setprecision(6) << get<2>(t);

    // auto [names, age, weight] = t;
    // cout<<names<<" "<<age<<" "<<weight;

    int n;
    cin >> n;
    // tuple<string, int, double> tpl[n];
    vector<tuple<string, int, double>> tpl(n);

    for (int i = 0; i < n; i++)
    {
        string s;
        int a;
        double b;
        cin >> s >> a >> b;
        tpl[i] = make_tuple(s, a, b);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << get<0>(tpl[i]) << " " << get<1>(tpl[i]) << " " << get<2>(tpl[i]) << '\n';
    // }

    for(const auto& t : tpl) {
        // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<'\n';
        auto[name, age, weight] = t;
        cout<<name<<" "<<age<<" "<<weight<<'\n';
    }
    return 0;
}