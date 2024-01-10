#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int

using namespace std;

/*-------------------SOLBEGIN-------------------*/

void solve() {
    string w; cin >> w;
    int cvnt = 0, min = 0, indx = -1;
    for (auto& i : w) {
        if (i == 'B') cvnt++; else cvnt--;
        if (cvnt < min) {min = cvnt; indx = &i - &w[0];}
    }
    cout << indx + 1 << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
