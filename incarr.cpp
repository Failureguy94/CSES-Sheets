#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>> n;
    int ct=0;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(!(a[i]<a[i+1])){
           ct=ct+a[i]-a[i+1];
           a[i+1]=a[i]-a[i+1];
        }
    }
    cout << ct << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}