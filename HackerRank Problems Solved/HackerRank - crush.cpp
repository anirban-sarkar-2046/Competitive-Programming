#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e7+10;

ll ar[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, m; cin >> n >> m;
    while(m--){
        ll a, b, k; cin >> a >> b >> k;
        ar[a] += k;
        ar[b+1] -= k;
    }

    ll mx=-1;
    for(ll i=1; i<=n; i++){
        ar[i] += ar[i-1];
        mx = max(ar[i], mx);
    } 
    cout << mx << '\n';
    return 0;
}
