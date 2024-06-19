#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int wt[105], val[105];

ll dp[105][100005];

ll func(int ind, int value_left){
    if(value_left == 0) return 0;
    if(ind < 0) return 1e15;
    if(dp[ind][value_left] != -1) return dp[ind][value_left];
    
    ll ans = func(ind-1, value_left);
    if(value_left - val[ind] >= 0){
        ans = min(ans, func(ind-1, value_left-val[ind]) + wt[ind]);
    }
    return dp[ind][value_left] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    memset(dp, -1, sizeof(dp));
    int n, w; cin >> n >> w;
    for(int i=0; i<n; i++){
      cin >> wt[i] >> val[i];
    } 
    int max_value = 1e5;
    for(int i=max_value; i>=0; i--){
      if(func(n-1, i) <= w){
        cout << i << '\n';
        break;
      }
    } 
    return 0;
}
