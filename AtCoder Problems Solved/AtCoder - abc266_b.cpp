#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    cout << (n%998244353+998244353)%998244353 << '\n';
    return 0; 
}
