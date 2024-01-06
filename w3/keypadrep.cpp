#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve(ll n, ll q) {
    vector<string> ids(n);
    map<string, ll> mp;
    for (auto& id : ids) {cin >> id;}
    for (auto& id : ids) {
        string ans;
        for (auto& c : id) {
            if (c == 'a' || c == 'b' || c == 'c') {ans += "2";}
            else if (c == 'd' || c == 'e' || c == 'f') {ans += "3";}
            else if (c == 'g' || c == 'h' || c == 'i') {ans += "4";}
            else if (c == 'j' || c == 'k' || c == 'l') {ans += "5";}
            else if (c == 'm' || c == 'n' || c == 'o') {ans += "6";}
            else if (c == 'p' || c == 'q' || c == 'r' || c == 's') {ans += "7";}
            else if (c == 't' || c == 'u' || c == 'v') {ans += "8";}
            else if (c == 'w' || c == 'x' || c == 'y' || c == 'z') {ans += "9";}
        }
        mp[ans]++;
    }
    while (q--) {string x; cin >> x; cout << mp[x] << endl;}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, q;
    cin >> n >> q;
    solve(n, q);

    return 0;
}
