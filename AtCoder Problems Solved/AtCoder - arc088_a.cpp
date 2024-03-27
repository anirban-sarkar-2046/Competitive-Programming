#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll l, r; cin >> l >> r;

    ll c=0;
    for(ll i=l; i<=r; i*=2){
      c++;
    }
    cout << c << '\n';
    return 0;
}
