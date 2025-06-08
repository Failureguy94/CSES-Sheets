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
        int i,j;
        //1 based indexing hai
        cin >> i >> j;
        //total 4 cases hai horizontal inc/dec and vertical inc/dec
        //if i==j toh value is known by maths 
        if(i==1 && j==1){
            cout << 1 << endl;
            return;
        }
        if(i==j){
            int a=(i*i)-i+1;
            cout << a << endl;
            return;
        }
       int temp;
        if((i&1) && j>=1 && j<=i){
            //horizontal dec
            temp=(i*i)-i+1;
            cout << temp-(i-j) << endl;
        }else if(i%2==0 && j>=1 && j<=i){
            //horizontal inc
            temp=(i*i)-i+1;
            cout << temp+(i-j) << endl;
        }else if(j&1 && i>=1 && i<=j){
            //vertical inc
            temp=(j*j)-j+1;
            cout << temp+(j-i) << endl;
        }else{
            //vertical dec
            temp=(j*j)-j+1;
            cout << temp-(j-i) << endl;
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

    return 0;
}
