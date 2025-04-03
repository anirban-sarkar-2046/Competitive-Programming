#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a, ll b, ll mod=10){
    ll ans = 1%mod;
    while(b){
        if(b&1) ans = ans*a%mod;
        a = a*a%mod;
        b>>=1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        cout << power(a,b) << '\n';
    }
    return 0;
}
