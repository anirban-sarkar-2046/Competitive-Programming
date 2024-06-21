#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 2e6+10;

ll a[N], hp[N], canRemove[N], hsh[N];

vector<ll> distinctPF(ll x){
    vector<ll> ans;
    while(x>1){
        ll pf = hp[x];
        while(x%pf==0) x/=pf;
        ans.push_back(pf);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(ll i=2; i<N; i++){
      if(hp[i]==0){
        for(ll j=i; j<N; j+=i){
            hp[j] = i;          
        } 
      }
    } 
    int n, q; cin >> n >> q;
    for(ll i=0; i<n; i++){
      ll x; cin >> x;
      hsh[x] = 1;
    } 
    for(ll i=2; i<N; i++){
      if(hsh[i]){
        for(ll j=i; j<N; j*=i){
          canRemove[j] = 1;
        } 
      }
    }  
    while(q--){
        ll x; cin >> x;
        vector<ll> pf = distinctPF(x);
        bool isPossible = false;
        for(ll i=0; i<pf.size(); i++){
          for(ll j=i; j<pf.size(); j++){
            ll product = pf[i] * pf[j];
            if(i==j && x%product!=0) continue;
            ll toRemove = x/product;
            if(canRemove[toRemove]==1 || toRemove==1){
                isPossible = true;
                break;
            }
          }
          if(isPossible) break; 
        } 
        cout << (isPossible ? "YES" : "NO") << '\n';
    }
    return 0;
}
