#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
    if (n==1) return a[n]>a[n-1];
    if (a[n]>a[n-1]) return check(a,n-1);
    else return false;
}

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];

    if (check(a,n-1)) cout<<"YES";
    else cout << "NO";
}
