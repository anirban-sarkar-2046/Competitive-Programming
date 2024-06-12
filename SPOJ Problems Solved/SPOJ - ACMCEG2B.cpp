#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll q; cin >> q;
    map<pair<ll,ll>,string> mp;
    while(q--){
        ll x, y; string s;
        cin >> x >> y >> s;
        mp[{x,y}] = s;
    }
    
    ll t; cin >> t;
    while(t--){
        ll x, y; cin >> x >> y;
        cout << mp[{x,y}] << '\n';
    }
    return 0;
}
