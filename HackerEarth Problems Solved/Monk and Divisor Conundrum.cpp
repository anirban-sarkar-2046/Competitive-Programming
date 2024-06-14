#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 2e5+10;

ll m[N], mp[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        mp[x]++;
    } 
    for(ll i=1; i<N; i++){
        for(ll j=i; j<N; j+=i){
            m[i] += mp[j];
        } 
    } 
    ll q; cin >> q;
    while(q--){
        ll p, q; cin >> p >> q;
        ll lcm = p*q/__gcd(p,q);
        cout << (lcm<N ? m[p]+m[q]-m[lcm] : m[p]+m[q]) << '\n';
    }
    return 0;
}
