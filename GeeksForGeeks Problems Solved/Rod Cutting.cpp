#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  int dp[1005];
  
  int func(int l, vector<int> &p){
      if(l==0) return 0;
      if(dp[l]!=-1) return dp[l];
      int ans=0;
      for(int lc=1; lc<=p.size(); lc++){
          if(l-lc>=0){
              ans = max(ans, func(l-lc, p) + p[lc-1]);
          }
      }
      return dp[l]=ans;
  }
  
    int cutRod(int price[], int n) {
        memset(dp, -1, sizeof(dp));
        vector<int> prices(price, price+n);
        return func(n, prices);
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
