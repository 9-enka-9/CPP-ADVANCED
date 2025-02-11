#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    int cnt[2]={0,0};
    for (int i=0;i<n;i++){
       cin>>a[i];
       cnt[a[i]%2]++;
    }
    long long res=(1ll*cnt[0]*(cnt[0]-1))/2;
    res+= (1ll*cnt[1]*(cnt[1]-1))/2;
    cout<<res;
}

