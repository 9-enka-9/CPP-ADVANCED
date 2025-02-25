#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    freopen("MERGE.INP",'r', stdin);
    freopen("MERGE.OUT", 'w', stdout);
    int x,y,k; cin>>x>>y>>k;
    vector<int> v;
    int i=1,j=1,c=1;
    if (x<y) { v.pb(x); i++; }
    else { v.pb(y); j++; }
    while (c<=k){
        if (i*x<j*y){
            v.pb(x*i); i++; c++;
        } else if (i*x>j*y){
            v.pb(y*j); j++; c++;
        } else { v.pb(x*i); i++; j++; }
    }
    cout<<v[k-1];
}
