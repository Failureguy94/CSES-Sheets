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
int fact(int n){
    int ans=1;
    if(n==0 || n==1){
        return 1;
    }
    for(int i=1;i<=n;i++){
    ans=ans*i;
    }
    return ans;
}
set<string> generate_uniquestrings(string str,int n){
      as(str);
    set<string> s;
    // ---------------------------------------------------------------->Using Do while
    // do{
    // s.insert(str);
    // }
    // while(next_permutation(all(str)));{
    //     // s.insert(str);
    // }
    // --------------------------------------------------------------------->Using while
    s.insert(str); 
    while(next_permutation(all(str))){
        s.insert(str);
    }
    return s;
}
void solve() {
    string str;
    cin>>str;
    int n=str.length();
    set<string> s=generate_uniquestrings(str,n);
   cout <<s.size()<<endl;
   for(string str:s){
    cout << str<<endl;
   }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
        solve();
    

    return 0;
}
