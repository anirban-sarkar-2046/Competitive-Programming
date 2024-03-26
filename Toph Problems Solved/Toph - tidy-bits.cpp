#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    unsigned int n; cin >> n;
    unsigned int c = __builtin_popcount(n), s=0;

    for(int i=0; i<c; i++){
        s += (1<<i);
    }
    cout << s << '\n';
    return 0;
}
