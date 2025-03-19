#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin>> n;
    if(n==1){
        cout << 1<<endl;
        return;
    }
    if( n==2 ||n==3 ){
        // 1 2 3 4               1   4 5 3   2
        cout << "NO SOLUTION"<<endl;
    }
    else{
        n=n-1;
        int i=0;
       while(n-2*i>0){
cout << n-2*i<< " ";
i++;
       }
       int j=0;
       while(n-2*j+1>0){
        cout << n-2*j+1 << " ";
        j++;
       }
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 solve();
    return 0;
}