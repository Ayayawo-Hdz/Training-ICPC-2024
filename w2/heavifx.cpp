#include "bits/stdc++.h"
//assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr<<#x<< "=" << (x) << endl;
#define RAYA cerr<<"======================"<<endl;
#define RAYAS cerr<<"......................"<<endl;

#define ll long long int
#define ull unsigned long long int

//--------------------SOLBEGIN---------------------------------

void uwo(){
    vector<ll>pos;
    vector<ll>neg;
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        if (a == 1) pos.push_back(b);
        if (a == -1) neg.push_back(b);
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());
    int m; cin>>m;
    while(m--){
        ll res=0;
        ll x;cin>>x;
        auto it = upper_bound(neg.begin(),neg.end(),-x);
        if(it!=neg.begin())
            res+=(int)(it-neg.begin());

        it = upper_bound(pos.begin(),pos.end(),x);
        if(it!=neg.begin())
            res+=(int)(it-pos.begin());
        cout<<res<<endl;
    }
}


int main() {
  ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    uwo();
}
