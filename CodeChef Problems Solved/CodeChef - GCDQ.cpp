#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, q; cin >> n >> q;
        ll a[n+10], f[n+10], b[n+10];
        f[0] = b[n+1] = 0;
        for(ll i=1; i<=n; i++){
            cin >> a[i];
            f[i] = __gcd(f[i-1],a[i]);
        }
        for(ll i=n; i>=1; i--){
            b[i] = __gcd(b[i+1], a[i]);
        }
        
        while(q--){
            ll l, r; cin >> l >> r;
            cout << __gcd(f[l-1], b[r+1]) << '\n';
        }
    }
    return 0;
}
