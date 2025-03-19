#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
void solve() {
    int n;
    cin>> n;
    vector<int> dp(n+1);//dp[k]->upto k tak sum krne keliye kya kya krna padega so isliye iase n tak krne keliy n+1
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){//phir alag possibility like how to get all or check all values by k+i 
            if(i>=j){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }
    }
    cout << dp[n]<<endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}

//