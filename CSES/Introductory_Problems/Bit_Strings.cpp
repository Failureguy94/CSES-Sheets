#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin>>n;
    int MOD=1e9+7;
    int k=(1LL<<n/2);
    cout << (2*(1<<(n/2)))%MOD<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   solve();

    return 0;
}