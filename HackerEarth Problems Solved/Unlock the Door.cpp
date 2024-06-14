#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll M = 1e9+7;
const ll N = 1e5+10;
ll f[N];

ll binexp(ll a, ll b, ll m){
    ll ans = 1;
    while(b>0){
        if(b&1) ans = (ans*a)%m;
        a = (a*a)%m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    f[0]=1;
    for(ll i=1; i<N; i++){
      f[i] = (f[i-1]*i)%M;
    } 
    while(t--){
        ll n,k; cin >> n >> k;
        cout << (((f[n]*f[k])%M) * binexp((f[k-n]*f[n])%M, M-2, M)) % M << '\n';
    }
    return 0;
}
