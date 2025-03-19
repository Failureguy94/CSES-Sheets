#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    cin>> v[i];
    }
    int ct=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
        ct=ct+(v[i]-v[i+1]);
        v[i+1]=v[i];
        }
    } 
    cout << ct<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  solve();

    return 0;
}