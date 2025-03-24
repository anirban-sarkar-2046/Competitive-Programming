#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll b, p, m;
    while(cin >> b >> p >> m){
        ll ans = 1;
        while(p){
            if(p&1) ans = (ans*b)%m;
            b = (b*b)%m;
            p >>= 1;
        } 
        cout << ans << '\n';
    }
    return 0;
}
