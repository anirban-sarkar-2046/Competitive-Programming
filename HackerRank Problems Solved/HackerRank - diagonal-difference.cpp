#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    int prim=0, sec=0;
    for(int i=0; i<n; i++){
        prim += arr[i][i];
        sec += arr[i][n-i-1];
    }
    
    cout << abs(prim-sec) << '\n';
}
