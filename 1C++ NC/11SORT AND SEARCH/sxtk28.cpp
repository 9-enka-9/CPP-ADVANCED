#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    if (a==0 or b==0)
        return a!=0;
    return false;
}

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    stable_sort(a, a+n, cmp);

    for (int i=0;i<n;i++) cout<<a[i]<<" ";
}
