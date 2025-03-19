#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n,k;
    cin>> n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
cin>> v[i];    }
vector<int> dp(k+1,1e9);
dp[0]=0;
// dp[i]--> dp[i] is the min number of coins req for sum k 
int mins=0;
for(int i=1;i<=k;i++){
for(int j=1;j<=n;j++){
    if(v[j-1]<=i){
    dp[i]=min(dp[i-v[j-1]]+1,dp[i]);
}
}
}
if(dp[k]<1e9){
    cout << dp[k]<<endl;
}
else{
    cout << -1<<endl;
}
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    return 0;
}