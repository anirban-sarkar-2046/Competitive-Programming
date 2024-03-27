#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll I = 1e5+5;
ll a[I];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;

    for(ll i=1; i<=n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    
    ll q; cin >> q;
    while(q--){
        ll l, r; cin >> l >> r;
        cout << a[r+1] - a[l] << '\n';
    } 
    return 0;
}
