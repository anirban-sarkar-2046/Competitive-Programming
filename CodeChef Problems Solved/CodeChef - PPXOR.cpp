#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e5+9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], pref_xor[n+1], cnt[30][2]={};
        for(ll i=0; i<n; i++) cin >> a[i];
        pref_xor[0] = 0;
        for(ll i=1; i<=n; i++){
            pref_xor[i] = pref_xor[i-1]^a[i-1];
        } 
        ll ans=0;
        for(ll i=0; i<=n; i++){
            for(ll k=0; k<30; k++){
                ll cur_bit = (pref_xor[i]>>k)&1;
                if (i>0){
                    if (cur_bit==0) ans += cnt[k][1]*(1LL<<k);
                    else ans += cnt[k][0]*(1LL<<k);
                }
                cnt[k][cur_bit]++;
            }
        } 
        cout << ans << '\n';
    }
    return 0;
}
