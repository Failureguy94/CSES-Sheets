#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n - 1);

    for (long long i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    int flag=0;
sort(v.begin(),v.end());
for(long long i=0;i<n-1;i++){
    // if(n-1==1){cout << (n*(n+1))/2 - accumulate(v.begin(),v.end(),0) << endl;
    // }
    
     if(v[i]!=i+1) {
        flag=1;
    cout << i+1<< endl;
    break;}
        

}
if (flag==0){
    cout << n<< endl;
}
}
    


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   solve();

    return 0;
}