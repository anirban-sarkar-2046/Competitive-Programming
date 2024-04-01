#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    ll a[n];
    map<ll, ll> cnt;

    for(ll i=0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll c=0;
    for(auto v : cnt){
      if(v.second > 1) c += v.second*(v.second - 1)/2;
    } 

    cout << n*(n-1)/2-c << '\n';
    return 0;
}
