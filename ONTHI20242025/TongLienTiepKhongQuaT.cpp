#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,t,x; cin>>n>>t;
    long long s[n+1];
    s[0]=0;
    for (int i=1;i<=n;i++){
        cin>>x; s[i]=s[i-1]+x;
    }

    for (int i=n;i>=1;i--){
        for (int j=0;j<=n-i;j++){
            long long temp = s[j+i]-s[j];
            if (temp<=t){
                cout<<i;
                return 0;
            }
        }
    }
}
