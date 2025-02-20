#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x; cin>>n;
    unordered_set<int> se;
    for (int i=0;i<n;i++){
        cin>>x; se.insert(x);
    }

    cout<<se.size();
}
