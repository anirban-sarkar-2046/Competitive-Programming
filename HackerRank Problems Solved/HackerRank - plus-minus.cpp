void plusMinus(vector<int> arr) {
    int pos=0, mini=0, zero=0, n=arr.size();
    for(int i=0; i<n; i++){
       if(arr[i]==0) zero++;
       else if(arr[i]>0) pos++;
       else mini++; 
    }
    cout << fixed << setprecision(6);
    cout << (double)pos/n << '\n';
    cout << (double)mini/n << '\n';
    cout << (double)zero/n << '\n';
}
