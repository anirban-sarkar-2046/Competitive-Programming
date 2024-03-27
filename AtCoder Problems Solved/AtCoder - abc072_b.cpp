#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a; cin >> a;

    for(ll i=0; i<a.size(); i++){
      if(i%2==0) cout << a[i];
    } 
    cout << '\n';
    return 0;
}
