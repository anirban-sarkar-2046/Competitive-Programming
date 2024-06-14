#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll c; cin >> c;
    ll bit_cnt = (int)log2(c) + 1;
    ll a=0, b=0;

    vector<int> set_bits;
    for(ll i=0; i<bit_cnt; i++){
      if(c&(1<<i)) set_bits.push_back(i);
      else{
        a |= (1<<i);
        b |= (1<<i);
      }
    } 
    
    ll ans=-1;
    for(ll mask=0; mask<(1<<set_bits.size()); mask++){
        ll a1=a, b1=b;
        for(ll j=0; j<set_bits.size(); j++){
            if(mask&(1<<j)) a1 |= (1<<set_bits[j]);
            else b1 |= (1<<set_bits[j]);
        }
        ans = max(ans, a1*b1);
    }
    cout << ans << '\n';
    return 0;
}
