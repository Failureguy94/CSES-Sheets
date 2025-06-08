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
string s;
cin>> s;
int n=s.length();
map<char,int> mp;
for(char c:s){
    mp[c]++;
}
int ct=0;
 for(auto &pr:mp){
    if(pr.second%2!=0){
ct++;
    }
 }
 if(ct>=2){
    cout << "NO SOLUTION";
 }

 else{
    if(ct==1){
    char x;int y;
    for(auto &pr:mp){
        if(pr.second%2==0){
   for(int i=1;i<=pr.second/2;i++){
    cout << pr.first;
   }
}
else{
    x=pr.first;
    y=pr.second;
}
    }
     for(int i=1;i<=y;i++){
    cout << x;
   }
string k ="";
   for(auto &pr:mp){
    if(pr.second%2==0){
   for(int i=1;i<=pr.second/2;i++){
  k+=pr.first;
   }
}
}
for(int i=k.length()-1;i>=0;i--){
    cout << k[i];
}
 }
 else if(ct==0){
  char x;int y;
    for(auto &pr:mp){  
   for(int i=1;i<=pr.second/2;i++){
    cout << pr.first;
   }
    }
string k ="";
   for(auto &pr:mp){
    if(pr.second%2==0){
   for(int i=1;i<=pr.second/2;i++){
  k+=pr.first;
   }
}
}
for(int i=k.length()-1;i>=0;i--){
    cout << k[i];
}
 }
 }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
        solve();


    return 0;
}
