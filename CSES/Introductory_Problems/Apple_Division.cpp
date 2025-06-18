#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> unique(vector<int> v) {
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
return v;
}
#define coutyes cout<<"YES"<<endl
#define coutno cout<<"NO"<<endl
#define as(v) sort(v.begin(), v.end())
#define sum(v) accumulate(v.begin(), v.end(),0LL)
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

// Template :https://github.com/Failureguy94/Template-for-Competitive-Programming
int recur(int i ,vector<int> &v,int sum1,int sum2,int n){
    if(i==n){
        return abs(sum1-sum2);
    }
  int x=  recur(i+1,v,sum1+v[i],sum2,n);
    int y=recur(i+1,v,sum1,sum2+v[i],n);
    return min(x,y);
}

void solve() {
    // Template :https://github.com/Failureguy94/Template-for-Competitive-Programming
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
    }
   cout << recur(0,v,0,0,n)<<endl;
    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    return 0;
}
