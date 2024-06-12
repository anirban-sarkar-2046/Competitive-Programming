#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; string s;
        cin >> n >> s;
        if(s=="FIFO"){
            queue<ll> q;
            while(n--){
                string a; cin >> a;
                if(a=="IN"){
                    ll x; cin >> x;
                    q.push(x);
                }
                if(a=="OUT"){
                    if(!q.empty()){
                        cout << q.front() << '\n';
                        q.pop();
                    }
                    else cout << "None\n";
                }
            }
        }
        if(s=="FILO"){
            stack<ll> st;
            while(n--){
                string a; cin >> a;
                if(a=="IN"){
                    ll x; cin >> x;
                    st.push(x);
                }
                if(a=="OUT"){
                    if(!st.empty()){
                        cout << st.top() << '\n';
                        st.pop();
                    }
                    else cout << "None\n";
                }
            }
        }
    }
    return 0;
}
