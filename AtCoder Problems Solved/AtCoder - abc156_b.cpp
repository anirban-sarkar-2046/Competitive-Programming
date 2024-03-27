#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, k; cin >> n >> k;

    ll d=0;
    while(n>0){
        n /= k;
        d++;
    }

    cout << d << '\n';
    return 0;
}
