#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k; cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    if (k<=n-k){
        long long st=0, sbt=0;
        for (int i=0;i<k;i++){
            sbt+=a[i];
        }
        for (int i=k;i<n;i++){
            st+=a[i];
        }
        cout<<st-sbt;
    } else {
        long long st=0, sbt=0;
        for (int i=n-k;i<n;i++){
            st+=a[i];
        }
        for (int i=0;i<n-k;i++){
            sbt+=a[i];
        }
        cout<<st-sbt;
    }
}
