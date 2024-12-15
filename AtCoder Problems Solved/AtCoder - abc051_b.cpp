#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll k, s, c=0; cin >> k >> s;
    for(ll i=0; i<=k; i++){
      for(ll j=0; j<=k; j++){
        if(s-i-j<=k && s-i-j>=0) c++;
      } 
    } 
    cout << c << '\n';
    return 0;
}
