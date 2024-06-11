#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        v.push_back(x);
    } 

    ll p; cin >> p;
    v.erase(v.begin()+p-1);
    ll l, r; cin >> l >> r;
    v.erase(v.begin()+l-1, v.begin()+r-1);

    cout << v.size() << '\n';
    for(auto a : v){
        cout << a << ' ';
    }
    cout << '\n';
    return 0;
}
