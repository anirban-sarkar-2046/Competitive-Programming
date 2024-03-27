#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;

    string s;
    for(ll i=1; i<=n; i++){
        s.push_back(i+'0');
    }

    cout << s << '\n';
    while(next_permutation(s.begin(), s.end())){
        cout << s << '\n';
    }
    return 0;
}
