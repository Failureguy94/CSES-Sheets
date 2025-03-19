#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
void solve() {
    int n,k;
    cin>> n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
cin>> v[i];    }
vector<int> dp(k+1,0);
dp[0]=1;
// dp[i]--> dp[i] is the numbers of ways to make sum k 
int mins=0;
for(int i=1;i<=k;i++){
for(int j=0;j<n;j++){
    if(v[j]<=i){
    dp[i]=(dp[i-v[j]]+dp[i])%MOD;
}
}
}
cout << dp[k]<<endl;


}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    return 0;
}