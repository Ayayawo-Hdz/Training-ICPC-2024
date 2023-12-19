#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

// tqm github copilot, me lees la mente

double dist(pair<double, double> a, pair<double, double> b) {
    return (b.first - a.first) * (b.first - a.first) + (b.second - a.second) * (b.second - a.second);
}

void solve(vector<pair<double, double>> t1, vector<pair<double, double>> t2) {
    vector<double> p(3), q(3);
    for (int i = 0; i < 3; i++) {
        p[i] = dist(t1[(i+1)%3], t1[(i+2)%3]);
        q[i] = dist(t2[(i+1)%3], t2[(i+2)%3]);
    }
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    if (p[0] / q[0] == p[1] / q[1] && p[1] / q[1] == p[2] / q[2]) {cout << "YES";} else {cout << "NO";}
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<double, double>> t1(3), t2(3);
    for (int i = 0; i < 3; i++) {cin >> t1[i].first >> t1[i].second;}
    for (int i = 0; i < 3; i++) {cin >> t2[i].first >> t2[i].second;}
    solve(t1, t2);

    return 0;
}
