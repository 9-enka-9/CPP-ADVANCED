#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    int s[n+2], x; s[0]=0;
    for (int i=1;i<=n;i++){
        cin>>x;
        s[i]=(s[i-1]+x+int(1e9)*k)%k;
        cout<<(s[i-1]+x)%k<<" ";
    } cout<<endl;
    for (int i=0;i<=n;i++){
        cout<<s[i]<<" ";
    }
    sort(s,s+n);
    s[n+1] = INT_MAX;
    int c=0,res=0;
    for (int i=0; i<=n; i++){
        if (s[i]==s[i-1]) c++;
        else {
            res += (c*(c-1))/2;
            c=1;
        }
    }
    cout<<res;
}
