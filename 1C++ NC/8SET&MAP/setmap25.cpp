#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    set<int> se;
    for (int i=0;i<n;i++) {
        int val; cin>>val;
        se.insert(val);
    }
    cout<<se.size()<<endl;
    auto it1=se.begin();
    auto it2=se.rbegin();
    cout<<*it2<<" "<<*it1<<endl;
    it1++; it2++;
    cout<<*it2<<" "<<*it1;
}
