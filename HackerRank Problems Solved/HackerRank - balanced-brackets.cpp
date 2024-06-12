#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll c1=0, c2=0, c3=0;
        string s; cin >> s;
        stack<char> st;
        st.push(' ');
        for(ll i=0; i<s.size(); i++){
          if(s[i]==')' && st.top()=='(') st.pop();
          else if(s[i]=='}' && st.top()=='{') st.pop();
          else if(s[i]==']' && st.top()=='[') st.pop();
          else st.push(s[i]);
        }
        cout << (st.size()==1 ? "YES" : "NO") << '\n';
    }
    return 0;
}
