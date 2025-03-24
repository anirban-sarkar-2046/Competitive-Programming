#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull mulmod(ull a, ull b, ull c){
    ull ans = 0;
    while(b){
        if(b&1) ans = (ans+a)%c;
        a = (a+a)%c;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ull a, b, c;
    while(cin >> a >> b >> c){
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
