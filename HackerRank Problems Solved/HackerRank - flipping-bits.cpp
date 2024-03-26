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
        unsigned int s=0;
        for(int i=0; i<32; i++){
            if(((n>>i)&1)==0) s += (1<<i);
        }
        cout << s << '\n';
    }
    return 0;
}
