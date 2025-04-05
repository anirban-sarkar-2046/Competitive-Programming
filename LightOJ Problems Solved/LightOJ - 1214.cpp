#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t, tc=0;; cin >> t;
    while(t--){
        string a;
        ll b, ans=0;
        cin >> a >> b;
        if(a[0]=='-') a.erase(a.begin());
        b = abs(b);
        for(auto c : a){
            ans = (ans*10 + (c-'0')) % b;
        }
        tc++; 
        cout << "Case " << tc << ": " << (ans==0 ? "divisible" : "not divisible") << '\n';
    }
    return 0;
}
