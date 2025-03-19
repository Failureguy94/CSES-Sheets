#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    
    for (int k = 1; k <= n; k++)
    {

        cout <<  ((k*k)*(k*k - 1))/2  - (k-2)*(k-1)*4 << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
   solve();
    return 0;
}