#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=1e6+9, mod=1000003;
ll fac[N];

ll power(ll n, ll k){
    ll ans = 1%mod;
    while(k){
        if(k&1) ans = ans*n%mod;
        n = n*n%mod;
        k>>=1;
    }
    return ans;
}

ll inverse(ll b){
    return power(b, mod-2);
}

ll comb(ll n, ll k){
    if(k>n) return 0;
    ll up = fac[n];
    ll down = fac[k]*fac[n-k]%mod;
    return up*inverse(down)%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fac[0]=1;
    for(ll i=1; i<=N; i++) fac[i]=fac[i-1]*i%mod;
    ll t, tc=0; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << "Case " << ++tc << ": " << comb(n,k) << '\n';
    }
    return 0;
}
