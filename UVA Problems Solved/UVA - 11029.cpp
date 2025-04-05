#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll n, ll k, ll mod){
    ll ans = 1%mod;
    while(k){
        if(k&1) ans = ans*n%mod;
        n = n*n%mod;
        k>>=1;
    }
    return ans;
}

ll leading_three(ll n, ll k){
    double p = k*log10(n);
    double ans = pow(10,p-floor(p));
    return static_cast<ll>(ans*100); // alternative: floor(ans*100)
}

string format(ll n){
    string x = to_string(n);
    while(x.size()<3) x.insert(x.begin(),'0');
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << format(leading_three(n,k)) << "..." << format(power(n,k,1000)) << '\n';
    }
    return 0;
}
