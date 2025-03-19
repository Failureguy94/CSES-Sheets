#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
void solve() {
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    cin>> v[i];
    }
   vector<int> dp(k+1);
  
  //dp[i][k]->number of ways to contrcut the sum of k by skiping all before ci+1 and i to n-1 are usable 

    dp[0]=1;
  
// i-> sum keliye and j -> nummber of coins need to be skiped or usable coins 
 
       for(int j=0;j<n;j++){
         for(int i=1;i<=k;i++){
            
       if(i>=v[j]){
            dp[i]=(dp[i]+dp[i-v[j]])%MOD;
           
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