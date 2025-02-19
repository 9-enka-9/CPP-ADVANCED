#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    set<int> se;
    for (int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }

    for (int i=0;i<n;i++){
        auto it=upper_bound(se.begin(),se.end(),a[i]);
        if (it!=se.end()){
            cout<<(*it)<<" ";
        } else cout<<"_ ";
    }
}
