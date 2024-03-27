#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    cin >> a;
    cin >> b;

    ll cnt=0;
    for(ll i=0; i<a.size(); i++){
      if(a[i]!=b[i]) cnt++;
    } 

    cout << cnt << '\n';
    return 0;
}
