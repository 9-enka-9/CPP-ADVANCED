#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    freopen("CHIAK.INP", "r", stdin);
    freopen("CHIAK.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; ll k,res=0;
    cin>>n>>k;
    int s[n+3], x=0; s[0]=0;
    for (int i=1;i<=n;i++){
        cin>>x; x=((x%k)+(s[i-1]%k))%k;
        s[i]=(x+k)%k;
//        cout<<s[i-1]<<" "<<x<<" ..."<<s[i-1]+x<<"..."<<s[i]<<endl;
    }
    s[n+1] = INT_MAX;
    sort(s,s+n+2);
    ll c=1;
    for (int i=0; i<=n+1; i++){
        if (s[i]==s[i-1]) c++;
        else {
            ll t=c*(c-1);
            res += (t/2);
            c=1;
        }
    }
    cout<<res;
}
