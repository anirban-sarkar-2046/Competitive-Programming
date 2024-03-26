#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, k; cin >> n >> k;
    cout << (n & ((1<<30)-(1<<k))) << '\n';
    return 0;
}
