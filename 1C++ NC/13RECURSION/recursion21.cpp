#include<bits/stdc++.h>
using namespace std;

bool check(int a[],int l,int r){
    if (l<0) return true;
    if (a[l]==a[r]) return check(a,--l,++r);
    else return false;
}

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];

    int l=n/2, r=n/2;
    if (n%2==0) l--;
    if (check(a,l,r)) cout<<"YES";
    else cout<<"NO";
}
