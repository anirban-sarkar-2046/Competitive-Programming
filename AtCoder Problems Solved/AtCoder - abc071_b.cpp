#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a; cin >> a;
    ll s[26]={0};

    for(ll i=0; i<a.size(); i++){
        s[a[i]-'a']++;
    }

    for(ll i=0; i<26; i++){
        if(s[i]==0){
            cout << char(i+'a') << '\n';
            return 0;
        }
    }
    cout << "None\n";
    return 0;
}
