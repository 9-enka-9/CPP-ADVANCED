#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t; cin>>n;
    set<int> se;
    for (int i=0;i<n;i++){
        cin>>t; se.insert(t);
    }
    cout<<se.size();
}
