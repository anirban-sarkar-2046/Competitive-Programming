#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    map<ll,ll> mp;

    while(n--){
        ll x; cin >> x;
        mp[x]++;
    }

    for(auto x: mp){
      if(x.second==1){
        cout << x.first << '\n';
        break;
      }
    } 
    return 0;
}
