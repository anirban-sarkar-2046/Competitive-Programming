#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll q; cin >> q;
    set<ll> st;
    while(q--){
        ll x, y; cin >> x >> y;
        if(x==1) st.insert(y);
        if(x==2) st.erase(y);
        if(x==3) cout << ((st.find(y)!=st.end()) ? "Yes" : "No") << '\n';
    }
    return 0;
}
