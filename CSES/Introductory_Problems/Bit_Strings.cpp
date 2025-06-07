#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
int pow(int a,int b){
    int ans=1;
    // int a=2;
    while(b){
      if(1&b){
        ans=(ans*1LL*a)%MOD;
      }
      a=(a*a*1LL)%MOD;
      b=b>>1;
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    // int MOD=1e9+7;
    int a=2;
    cout << (pow(a,n))%MOD<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   solve();

    return 0;
}
