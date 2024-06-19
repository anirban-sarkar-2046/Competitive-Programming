#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5+10;

int h[N], dp[N];

int func(int i, int k){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost = INT_MAX;

    for(int j=1; j<=k; j++){
      if(i-j>=0) cost = min(cost, func(i-j, k) + abs(h[i]-h[i-j]));
    } 

    return dp[i] = cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    memset(dp, -1, sizeof(dp));
    int n, k; cin >> n >> k;
    for(ll i=0; i<n; i++){
      cin >> h[i];
    } 
    cout << func(n-1, k);
    return 0;
}
