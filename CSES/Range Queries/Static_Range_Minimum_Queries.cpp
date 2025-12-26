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
struct MinSegmentTree {
    struct Node {
        int l, r, val;
        Node* left;
        Node* right;

        Node(int _l, int _r)
            : l(_l), r(_r), val(INT_MAX), left(nullptr), right(nullptr) {}

        int mid() { return (l + r) >> 1; }
    };

    Node* root;
    vector<int>& arr;

    MinSegmentTree(vector<int>& a) : arr(a) {
        root = new Node(0, (int)a.size() - 1);
        build(root);
    }

    void build(Node* node) {
        if (node->l == node->r) {
            node->val = arr[node->l];
            return;
        }

        int m = node->mid();
        node->left = new Node(node->l, m);
        node->right = new Node(m + 1, node->r);

        build(node->left);
        build(node->right);

        node->val = min(node->left->val, node->right->val);
    }

    int query(Node* node, int l, int r) {
        if (!node || r < node->l || l > node->r)
            return INT_MAX;

        if (l <= node->l && node->r <= r)
            return node->val;

        return min(
            query(node->left,l,r),
            query(node->right,l,r)
        );
    }

    int get(int l, int r) {
        if (l>r) return INT_MAX;
        return query(root, l, r);
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
    MinSegmentTree S(v);
    while(q--){
        int a,b;
        cin>>a>>b;
        cout << S.get(a-1,b-1)<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();

    return 0;
}