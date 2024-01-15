#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007

using namespace std;

/*-------------------SOLBEGIN-------------------*/

void solve() {
    string s; cin >> s;
    int sum = 0;
    for (char c : s) {sum += c - '0'; sum %= 3;}
    vector<bool> v(2, false);
    vector<int> res;
    int n = s.back() - '0';
    int n1 = (s.length() > 1 ? stoi(s.substr(s.length() - 2, 2)) : n);
    if (n % 2 == 0 || n == 0) {res.push_back(2); v[0] = true;}
    if (sum == 0) {res.push_back(3); v[1] = true;}
    if (n1 % 4 == 0) {res.push_back(4);}
    if (n == 5 || n == 0) {res.push_back(5);}
    if (v[0] && v[1]) {res.push_back(6);}
    if (!res.size()) {res.push_back(-1);}
    for (int i : res) {cout << i; if (i != res.back() ? cout << " " : cout << endl);}
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
