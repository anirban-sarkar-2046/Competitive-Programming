#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<pair<ll,ll>> v;
        for(ll i=0; i<n; i++){
            ll x, y; cin >> x >> y;
            v.push_back({x,y});
        }

        sort(v.begin(), v.end(), [](pair<ll,ll> a, pair<ll,ll> b){
            if(a.first<b.first) return true;
            else if(a.first==b.first) if(a.second>b.second) return true;
            return false;
        });

        for(auto [i, j] : v){
            cout << i << ' ' << j << '\n';
        }
    }
    return 0;
}
