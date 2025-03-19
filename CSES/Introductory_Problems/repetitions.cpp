#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
int n=s.length();
int ca=0,cg=0,cc=0,ct=0 ,maxa=0, maxg=0,maxc=0,maxt=0;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        ca++;
        maxa=max(maxa,ca);
    }
    else{
        ca=0;
    }}
    int ans=0;
    ans=max(ans,maxa);
    for(int i=0;i<n;i++){
    if(s[i]=='G'){
        cg++;
        maxg=max(maxg,cg);
    }
    else{
        cg=0;
    }}
    ans=max(ans,maxg);
    for(int i=0;i<n;i++){
    if(s[i]=='C'){
        cc++;
        maxc=max(maxc,cc);
    }
    else{
        cc=0;
    }}
    ans=max(ans,maxc);
    for(int i=0;i<n;i++){
    if(s[i]=='T'){
        ct++;
        maxt=max(maxt,ct);
    }
    else{
        ct=0;
    }}
    ans=max(ans,maxt);
  cout << ans << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

            solve();
    
}