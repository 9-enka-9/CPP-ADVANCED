#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return abs(a)<abs(b);
}

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n, cmp);

    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
