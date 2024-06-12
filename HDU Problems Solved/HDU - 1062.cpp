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
        vector<string> v;
        string a;
        for(ll i=0; i<s.size(); i++){
          a += s[i];
          if(s[i]==' '){
            a.pop_back();
            reverse(a.begin(), a.end());
            v.push_back(a);
            a = "";
          }
        }
        reverse(a.begin(), a.end());
        v.push_back(a); 
        
        for(auto x : v){
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}
