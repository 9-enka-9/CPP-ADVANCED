#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    int a[n];
    set<int> sem;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<m;i++){
        int x; cin>>x;
        sem.insert(x);
    }

    for (int i=0;i<n;i++){
        if (sem.count(a[i])!=0) {
            cout<<a[i]<<" ";
            sem.erase(a[i]);
        }
    }
}
