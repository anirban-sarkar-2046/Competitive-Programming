#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef unsigned __int128 u128;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ull t; cin >> t;
    while(t--){
        ull a, b; string s;
        cin >> a >> b >> s;
        u128 c = 0;
        for(auto d : s) c = c*10+(d-'0');
        ull ans = 1%c;
        while(b){
            if(b&1) ans = (u128)ans*a%c;
            a = (u128)a*a%c;
            b >>= 1;
        } 
        cout << ans << '\n';
    }
    return 0;
}
