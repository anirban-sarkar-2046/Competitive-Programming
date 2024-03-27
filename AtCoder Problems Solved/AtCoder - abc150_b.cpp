#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; 
    string s;
    cin >> n;
    cin >> s;

    ll c=0;
    for(ll i=0; i<n-2; i++){
      if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') c++;
    } 

    cout << c << '\n';
    return 0;
}
