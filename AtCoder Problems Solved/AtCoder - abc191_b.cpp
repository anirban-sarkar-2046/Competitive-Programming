#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, x; cin >> n >> x;
    ll a[n];

    for(auto &i:a) cin >> i;

    for(auto i:a){
        if(i!=x) cout << i << ' ';
    } 
    cout << '\n';
    return 0;
}
