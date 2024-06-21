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

        ll s=0;
        for(ll i=1; i<=n; i++){
            ll c=0;
            for(ll j=0; j<10; j++){
                if((i>>j)&1) c++;
            }
            s += c;
         }

        cout << s << '\n'; 
    }
    return 0;
}
//end
