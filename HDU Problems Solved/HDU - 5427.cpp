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
        cin.ignore();
        priority_queue<pair<ll, string>> pq;
        while(n--){
            string s; getline(cin, s);
            ll len = s.size();
            ll y = stoi(s.substr(len-4));
            string nm = s.substr(0, len-5);
            pq.push({y,nm});
        }
        while(!pq.empty()){
            cout << pq.top().second << '\n';
            pq.pop();
        }
    }
    return 0;
}
