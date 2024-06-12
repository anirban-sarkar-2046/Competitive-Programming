#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string a;
        while(ss>>a){
            reverse(a.begin(), a.end());
            cout << a << ' ';
        }
        cout << '\n';
    }
    return 0;
}
