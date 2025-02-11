#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    set<int> se;
    for (int i=0; i<n; i++){
        int x; cin>>x;
        se.insert(x);
    }
    int q; cin>>q;
    for (int i=0;i<q;i++){
        int query; cin>>query;
        if (query==1){
            int x; cin>>x;
            se.insert(x);
        } else if (query==2){
            int x; cin>>x;
            se.erase(x);
        } else if (query==3){
            cout<<*se.begin()<<endl;
        } else {
            cout<<*se.rbegin()<<endl;
        }
    }
}
