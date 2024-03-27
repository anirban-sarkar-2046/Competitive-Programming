#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    ll a[n];

    for(ll i=0; i<n; i++) cin >> a[i];

    ll cntmx=0, p=0;
    for(ll i=2; i<=1005; i++){
        ll cnt=0;
        for(ll j=0; j<n; j++){
            if(a[j]%i==0){
                cnt++;
            }
        } 
        if(cnt>=cntmx){
            cntmx = cnt;
            p = i;
        }
    } 

    cout << p << '\n';
    return 0;
}
