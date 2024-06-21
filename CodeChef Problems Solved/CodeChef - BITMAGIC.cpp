#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    unsigned int t; cin >> t;
    while(t--){
        unsigned int n, k; cin >> n >> k;
        n = n|(1<<k);
        cout << n << '\n';
    }
    return 0;
}
//
