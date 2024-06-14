#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e6+10;

ll n, m, a[N];

bool f(ll x){
    ll s=0;
    for(ll i=0; i<n; i++){
      if(a[i]>=x) s += (a[i] - x);
    } 
    return s>=m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(ll i=0; i<n; i++) cin >> a[i];
    ll l=0, h=1e9, md;
    while(h-l>1){
        md = (h+l)/2;
        if(f(md)) l = md;
        else h = md-1;
    }
    if(f(h)) cout << h << '\n';
    else cout << l << '\n';
    return 0;
}
