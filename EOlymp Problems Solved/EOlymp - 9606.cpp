#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a, ll k, ll n){
    ll ans = 1%n;
    while(k){
        if(k&1) ans = ans*a%n;
        a = a*a%n;
        k >>= 1;
    }
    return ans;
}

ll inverse(ll b, ll n){    // (1/b)%mod
    return power(b, n-2, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, n; cin >> a >> b >> n;
    ll ans = a * inverse(b,n)%n;
    cout << ans << '\n';
    return 0;
}
