#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        unsigned int n; cin >> n;
        unsigned int bit[32], s=0;

        for(int i=0; i<32; i++){
            bit[i] = (n>>i)&1;
        }

        reverse(bit, bit+32);

        for(int i=0; i<32; i++){
            if(bit[i]) s += (1<<i);
        }
        cout << s << '\n';
    }
    return 0;
}
