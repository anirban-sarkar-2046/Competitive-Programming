#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    ll ans=0;
    for(ll i=0; i<n; i++){
      ll x; cin >> x;
      ans += x-1;
    } 
    cout << ans << '\n';
    return 0;
}
