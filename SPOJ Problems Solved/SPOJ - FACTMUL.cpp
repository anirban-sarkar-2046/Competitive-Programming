#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;

const ll N = 1e7+9;
const ll mod = 109546051211;

ll fac[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fac[0]=1;
    for(ll i=1; i<=N; i++){
      fac[i] = fac[i-1]*i%mod;
    } 
    ll n; cin >> n;
    ll ans = 1;
    for(ll i=1; i<=n; i++){
      ans = (i128)ans*fac[i]%mod;
    } 
    cout << ans << '\n';
    return 0;
} //
