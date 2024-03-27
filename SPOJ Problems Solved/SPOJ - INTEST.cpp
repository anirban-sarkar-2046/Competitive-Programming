#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, k; cin >> n >> k;

    ll cnt = 0;
    for(ll i=0; i<n; i++){
      ll x; cin >> x;
      if(x%k==0) cnt++;
    } 

    cout << cnt << '\n';
    return 0;
}
