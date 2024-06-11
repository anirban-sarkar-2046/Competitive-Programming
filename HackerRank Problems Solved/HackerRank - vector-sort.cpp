#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        v.push_back(x);
    } 

    sort(v.begin(), v.end());

    for(auto a : v){
        cout << a << ' ';
    }
    cout << '\n';
    return 0;
}
