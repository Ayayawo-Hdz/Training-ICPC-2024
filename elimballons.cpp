#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ballons(n);
    for (auto& x : ballons) {cin >> x;}
    multiset<int> res;
    for(auto x:ballons){
        if(res.lower_bound(x+1)!=res.end() && *res.lower_bound(x+1)==x+1)
            res.erase(res.lower_bound(x+1));
        res.insert(x);
    }
    cout<<res.size();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
    return 0;
}
