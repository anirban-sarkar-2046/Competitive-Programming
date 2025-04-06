#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9;

ll reduce(ll x){
    while(x>0 && x%10==0) x/=10;
    return x%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    while(cin >> n >> m){
        ll ans=1;
        for(ll i=n; i>=(n-m+1); i--){
          ans*=i;
          ans = reduce(ans);
        } 
        cout << ans%10 << '\n';
    }
    return 0;
}
