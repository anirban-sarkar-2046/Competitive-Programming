#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<string, string> mp;
    string s;
    while(getline(cin, s)){
        if(s.empty()) continue;
        if(find(s.begin(), s.end(), ' ') != s.end()){
            stringstream ss(s);
            string a, b;
            ss >> a >> b;
            mp[b] = a;
        }
        else{
            if(mp.find(s)!=mp.end()) cout << mp[s] << '\n';
            else cout << "eh" << '\n';
        }
    }
    return 0;
}
