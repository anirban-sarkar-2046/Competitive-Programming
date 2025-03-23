#include<bits/stdc++.h>
using namespace std;
typedef unsigned int ui;
typedef long long ll;

const ui N = (1u<<31);
bitset<N> f;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ui q, s, a, b; cin >> q >> s >> a >> b;
    ll sum=0;
    while(q--){
        if(s&1){
            ui x=s/2;
            if(!f[x]){
                f[x] = 1;
                sum += x;
            }
        }
        else{
            ui x=s/2;
            if(f[x]){
                f[x] = 0;
                sum -= x;
            }
        }
        s = a*s+b; //overflow but in modulo 2^32
    }
    cout << sum << '\n';
    return 0;
}
