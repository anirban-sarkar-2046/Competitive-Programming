#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1000009;
const ll mod = 1000000003;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a[N+1];
    a[1] = 1;
    for(ll i=2; i<=N; i++){
        ll s1 = (i*(i+1)/2) % mod;
        ll s2 = s1 * s1 % mod;
        a[i] = (a[i-1] + s2) % mod;
    } 
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << a[n] % mod << '\n';
    }
    return 0;
}
