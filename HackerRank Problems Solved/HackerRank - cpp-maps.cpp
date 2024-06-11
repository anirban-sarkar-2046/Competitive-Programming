#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll q; cin >> q;
    map<string, ll> mp;
    while(q--){
        ll t, y; 
        string x;
        cin >> t >> x;
        if(t==1){
            ll y; cin >> y;
            mp[x] += y;
        }
        if(t==2) mp[x] = 0;
        if(t==3) cout << mp[x] << '\n';
    }
    return 0;
}
