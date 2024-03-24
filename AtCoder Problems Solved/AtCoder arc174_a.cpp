#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, c; cin >> n >> c;
    ll a[n], b[n];

    ll sum = 0;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        b[i] = -a[i];
    }

    ll maxx = -1e9+7, maxe = 0,  maxx1 = -1e9+7, maxe1 = 0;
    for (ll i = 0; i < n; i++) {
        maxe += a[i];
        maxx = max(maxx, maxe);
        if (maxe<0) maxe = 0;

        maxe1 += b[i];
        maxx1 = max(maxx1, maxe1);
        if (maxe1<0) maxe1 = 0;
    }

    if(c>0)cout << (maxx<0 ? sum : (sum + maxx * (c-1))) << '\n';
    else cout << (maxx1<0 ? sum : (sum + maxx1 * (-c+1))) << '\n';

    return 0;
}
