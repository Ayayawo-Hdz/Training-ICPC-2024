#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve(map<int, int>& cards, int& jpts, int& mpts) {
    int jmin = 24 - jpts, mmax = 23 - mpts;
    if (jmin > 10 && mmax > 10) {cout << -1 << "\n"; return;}
    for (int i = min(jmin, mmax); i <= mmax; i++) {
        if (cards[i] < 4) {cout << i << "\n"; return;}
    }
    cout << -1 << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x , y, p = 2, jpts = 0, mpts = 0;
    map<int, int> cards;
    cin >> n;
    while (p--) {
        cin >> x >> y;
        if (x >= 11 && x <= 13) {x = 10;}
        if (y >= 11 && y <= 13) {y = 10;}
        if (p == 1) {jpts = x + y;} else {mpts = x + y;}
        cards[x]++;
        cards[y]++;
    }
    while (n--) {
        int x;
        cin >> x;
        if (x >= 11 && x <= 13) {x = 10;}
        if (y >= 11 && y <= 13) {y = 10;}
        jpts += x;
        mpts += x;
        cards[x]++;
    }
    solve(cards, jpts, mpts);

    return 0;
}
