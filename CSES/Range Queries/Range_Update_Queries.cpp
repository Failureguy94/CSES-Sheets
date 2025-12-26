#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD =1e9+7;
vector<int> unique(vector<int> v) {
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
return v;
}
    int toint(char c){ return c-'0'; }
#define coutyes cout<<"YES"<<endl
int addm(int a,int b){ return (a%MOD + b%MOD)%MOD; }
int mulm(int a,int b){ return ((a%MOD)*(b%MOD))%MOD; }
#define coutno cout<<"NO"<<endl
#define as(v) sort(v.begin(), v.end())
#define sum(v) accumulate(v.begin(), v.end(),0int)
#define ds(v) sort(v.begin(), v.end(), greater<>())
#define aint(x) (x).begin(), (x).end()
#define pb push_back
#define MIN(v) *min_element(aint(v))
#define MAX(v) *max_element(aint(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define ceil(a, b) (a + b - 1) / b
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }

// Template :https://github.com/Failureguy94/Template-for-Competitive-Programming
struct BIT {
    vector<int> bit;
    BIT (int size) {
        vector<int> v(size);
        bit=v;
    }
    void update (int i, int delta) {
            while(i<(int)bit.size()){
            bit[i] += delta;
            i |= i+1;
        }
    }
 
    void update (int l, int r, int delta) {
        update(l, delta);
        update(r + 1, -delta);
    }
 
    int get (int i) {
        int sum = 0;
        while(i>=0){
            sum += bit[i];
            i = (i & (i + 1)) - 1;
        }
        return sum;
    }
};

void solve() {
    // Template :https://github.com/Failureguy94/Template-for-Competitive-Programming
        int n,q;
        cin >> n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
    }
    BIT F(n);
    while(q--){
        int c;
        cin>>c;
        if(c==1){
            int a,b,u;
            cin>>a>>b>>u;
            a--;
            b--;
            F.update(a,b,u);
        }
        else{
            int k;
            cin>>k;
            k--;
            cout <<v[k]+ F.get(k)<<endl;
        }
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}