#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 10000007;

ll power(ll n, ll k){
    ll ans = 1%mod;
    while(k){
        if(k&1) ans = ans*n%mod;
        n = n*n%mod;
        k>>=1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, k;
    while(cin >> n >> k){
        if (n==0 && k==0) break;
        ll sn = (2*power(n-1,k)+power(n,k))%mod;
        ll pn = (2*power(n-1,n-1)+power(n,n))%mod;
        cout << (sn+pn)%mod << '\n';
    }
    return 0;
}
