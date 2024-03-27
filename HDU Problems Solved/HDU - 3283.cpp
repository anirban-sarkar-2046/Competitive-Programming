#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        string a = s;
        next_permutation(a.begin(), a.end());
        cout << n++ << ' ' << (a>s ? a : "BIGGEST") << '\n';
    }
    return 0;
}
