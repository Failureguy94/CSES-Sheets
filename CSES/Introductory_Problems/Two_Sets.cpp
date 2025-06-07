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
    int n;
    cin>>n;
    int k=0;
       vector<int> a(n);
      vector<int> b(n);
    int sum=(n*(n+1))/2;
     if(((n*(n+1))/2)&1){
        cout << "NO";
     }
     else{
        int a1=0;
        int b1=0;
      sum=sum/2;
      for(int i=n;i>0;i--){
          if(sum>=i){
      a[a1]=i;
      a1++;
      k++;
      sum=sum-i;
          }
          else{
      b[b1]=i;
      b1++;
          }
      }
        cout << "YES"<<endl;
        cout << k<<endl;
        for(int i=0;i<k;i++){
        cout << a[i]<<" ";
     }
    cout <<  endl;
    cout << n-k<<endl;
     for(int i=0;i<n-k;i++){
        cout << b[i]<<" ";
     }
     }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
        solve();
    
    return 0;
}
