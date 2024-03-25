#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int pos=0, neg=0, zero=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
       if(arr[i]==0) zero++;
       else if(arr[i]>0) pos++;
       else neg++; 
    }
    cout << fixed << setprecision(6);
    cout << (double)pos/n << '\n';
    cout << (double)neg/n << '\n';
    cout << (double)zero/n << '\n';
}
