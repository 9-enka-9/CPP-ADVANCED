#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n, greater<int>());

    int i=0,s=0;
    while (i<n and a[i]-i>0){
        s+=(a[i]-i); i++;
    }
    cout<<s;
}
