#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    ll a[n];

    for(ll i=0; i<n; i++) cin >> a[i];

    ll maxx = -1e9-7, maxe = 0;
    for (ll i = 0; i < n; i++) {
        maxe += a[i];
        maxx = max(maxx, maxe);
        if (maxe<0) maxe = 0;
    }

    cout << maxx << '\n';
    return 0;
}
