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
void towerOfHanoi(int n, int from_rod, int to_rod,
                  int aux_rod)
{
    if (n == 0) {

        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout  << from_rod
         << " " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

void solve() {
    int n;
    cin>> n;
    cout << (1<<n) - 1 <<endl;
    towerOfHanoi(n,1,3,2);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   solve();
   
       return 0;
}
