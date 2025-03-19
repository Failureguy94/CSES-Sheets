#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int a,b;
    cin>> a>>b;
int f=b -a;
a-=f;
b-=2*f; //
if( a==b && a>=0 && a%3==0){
    cout << "YES"<<endl;
}
else{
    cout << "NO"<<endl;
} 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

   // a-b b=b-a+B a=a-2a+2b 3b-2a
    return 0;
}