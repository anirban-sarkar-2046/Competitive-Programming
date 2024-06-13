#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, a;
    set<string> st;
    
    while (cin >> s) {
        for(char c : s){
            if(c>='a' && c<='z') a.push_back(c);
            else if(c>='A' && c<='Z') a.push_back(char(c | ' '));
            else{
                if(!a.empty()) st.insert(a);
                a = "";
            }
        }
        if(!a.empty()){
            st.insert(a);
            a = "";
        }
    }

    for (auto x : st) {
        cout << x << '\n';
    }
    return 0;
}
