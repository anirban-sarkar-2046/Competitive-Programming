#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef __int128 i128;

ull mulmod(ull a, ull b, i128 c){
    ull ans = 0;
    while(b){
        if(b&1) ans = ((i128)ans+a)%c;
        a = ((i128)a+a)%c;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ull t; cin >> t;
    while(t--){
        ull a, b; string s;
        cin >> a >> b >> s;
        i128 c = 0;
        for(auto d : s) c = c*10+(d-'0');
        ull ans = 1%c;
        while(b){
            if(b&1) ans = mulmod(ans,a,c);
            a = mulmod(a,a,c);
            b >>= 1;
        } 
        cout << ans << '\n';
    }
    return 0;
}
