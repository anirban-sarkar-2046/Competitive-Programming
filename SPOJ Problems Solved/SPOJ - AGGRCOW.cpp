#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e6+10;

ll t, n, m, a[N];

bool f(ll x){
    ll p=-1;
    ll c=m;
    for(ll i=0; i<n; i++){
      if(a[i]-p>=x || p==-1){
        p = a[i];
        c--;
      }
      if(c==0) break;
    } 
    return c==0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        ll l=0, h=1e9, md;
        while(h-l>1){
            md = (h+l)/2;
            if(f(md)) l = md;
            else h = md-1;
        }
        cout << (f(h) ? h : l) << '\n';
    }
    return 0;
}
