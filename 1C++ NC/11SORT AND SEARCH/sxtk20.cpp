#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t; cin>>n;
    set<int> a;
    for (int i=0;i<n;i++){
        cin>>t;
        a.insert(t);
    }

    int l=(*a.begin()), r=(*a.rbegin());
    int c=r-l-a.size()+1;
    cout<<c;
}
