#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

double solve(string& s) {
    map<char, int> tend;
    for (auto& x : s) {tend[x]++;}
    double res = 0;
    for (auto& y : s) {res += tend[y] * 1.0 / s.length();}
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    double res = solve(s);
    cout << fixed << setprecision(15) << res;

    return 0;
}