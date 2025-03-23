#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e5+9, MAX_VAL = 4005;
bitset<MAX_VAL> prefix_mask_a[N], prefix_mask_b[N];
ll a[N], b[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, m, q; cin >> n >> m >> q;
    for(ll i=1; i<=n; i++) cin >> a[i];
    for(ll i=1; i<=m; i++) cin >> b[i];

    prefix_mask_a[0].reset();
    for(ll i=1; i<=n; i++){
      prefix_mask_a[i] = prefix_mask_a[i-1];
      prefix_mask_a[i].flip(a[i]);
    } 

    prefix_mask_b[0].reset();
    for(ll i=1; i<=m; i++){
        prefix_mask_b[i] = prefix_mask_b[i-1];
        prefix_mask_b[i].flip(b[i]);
    } 

    while(q--){
        ll l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
        auto subarray_mask_a = prefix_mask_a[r1] ^ prefix_mask_a[l1-1];
        auto subarray_mask_b = prefix_mask_b[r2] ^ prefix_mask_b[l2-1];
        auto merged_mask = subarray_mask_a ^ subarray_mask_b;
        cout << merged_mask.count() << '\n';
    }
    return 0;
}
