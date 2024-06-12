#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll m, n; cin >> m >> n;
    map<string, ll> mp;
    while(m--){
        string s; ll x;
        cin >> s >> x;
        mp[s] = x;
    }
    while(n--){
        string a; ll sum = 0;
        while(cin >> a && a != "."){
            if(mp.find(a)!=mp.end()) sum += mp[a];
        }
        cout << sum << '\n';
    }
    return 0;
}
