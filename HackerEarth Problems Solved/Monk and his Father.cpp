#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << __builtin_popcountll(n) << '\n';
    }
    return 0;
}
