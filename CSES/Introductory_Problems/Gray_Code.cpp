#include <bits/stdc++.h>
#include<string>
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

// string decToBinary(int n) {
//     string bin = ""; 
//     while (n > 0) {
//         int bit = n & 1;
//         bin.push_back('0' + bit);
//         n = n >> 1;
//     }	
//     reverse(bin.begin(), bin.end());
//     return bin;
// }
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < (1<<n); i++) {
        int gray = i ^ (i >> 1);
        string bin = bitset<64>(gray).to_string(); // 64-bit binary
        cout << bin.substr(64 - n) << endl; // take last n bits
    }

}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
solve();
    return 0;
}
