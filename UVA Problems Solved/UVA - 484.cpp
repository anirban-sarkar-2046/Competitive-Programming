#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll x;
    unordered_map<ll,ll> mp;
    vector<ll> v;
    while(cin >> x){
        if(mp[x]==0) v.push_back(x);
        mp[x]++;
    }
    for(auto i : v) cout << i << ' ' << mp[i] << '\n';
    return 0;
}
