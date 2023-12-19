#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

ull solve(string& word, ull n) {
    ull cum = 0;
    ull chnks = 0;
    char curr_ch = word[0];
    for (int i = 1; i < n; ++i) {
        if (word[i] != curr_ch) {
            ull chnkl = i - chnks;
            if (chnkl >= 2) {cum += (curr_ch == 'a') ? chnkl : 0;}
            chnks = i;
            curr_ch = word[i];
        }
    }
    ull chnkl = n - chnks;
    if (chnkl >= 2) {cum += (curr_ch == 'a') ? chnkl : 0;}
    return cum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull n;
    string word;
    cin >> n;
    cin >> word;
    ull res = solve(word, n);
    cout << res;

    return 0;
}
