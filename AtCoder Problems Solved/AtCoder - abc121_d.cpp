#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll l, r; cin >> l >> r;
    ll l1 = ((l/4)*4)-1, r1 = ((r/4)*4)-1, la=0, ra=0;

    for(ll i=l1+1; i<=l-1; i++){
      la ^= i;
    } 

    for(ll i=r1+1; i<=r; i++){
      ra ^= i;
    }

    cout << (la^ra) << '\n'; 
    return 0;
}
