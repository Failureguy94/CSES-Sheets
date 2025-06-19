#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> unique(vector<int> v) {
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
return v;
}
#define as(v) sort(v.begin(), v.end())
#define coutyes cout<<"YES"<<endl
#define coutno cout<<"NO"<<endl
#define as(v) sort(v.begin(), v.end())
#define ds(v) sort(v.begin(), v.end(), greater<>())
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define ceil(a, b) (a + b - 1) / b
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
void solve() {
    // Template :https://github.com/Failureguy94/Template-for-Competitive-Programming
        int n,m,k;
        cin >> n>>m>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
    }
     vector<int> b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
    }
    as(a);
    as(b);
    int ans=0;
    int i=0;
    int j=0;
    while(i<n && j<m){
     if(a[i]+k>=b[j] && a[i]-k<=b[j]){
        ans++;
        i++;
        j++;
     }
     else if(a[i]>b[j]){
       j++;
     }
     else{
        i++;
     }
    }
    cout << ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    
    return 0;
}