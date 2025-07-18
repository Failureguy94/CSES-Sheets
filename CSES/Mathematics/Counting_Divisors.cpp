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
const int MAX = 1e6;
vector<int> primes;
void sieve() {
    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i]) {
            primes.pb(i);
            for (int j = i * 2; j <= MAX; j += i)
                is_prime[j] = false;
        }
    }
}
void solve() {
    int x;
    cin>>x;
    vector<int> v;
    for(int p :primes){
        if(p*p>x)
        { break;}
        int pow=0;
        while(x%p==0){
            pow++;
            x/=p;
        }
        if(pow){
            v.pb(pow);
        }
       
    }
     if(x!=1){
            v.pb(1);
        }
int ct=1;
        for(int z: v){
            ct*=(z+1);
        }
        cout << ct<<'\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
sieve();
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}