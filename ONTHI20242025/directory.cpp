#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define bp pop_back
vector<string> v;

void dfs(int a, int u){

}

int main(){
    int n; cin>>n;
    string s;
    for (int i=0;i<n;i++){
        cin>>s; v.pb(s);
    }
    int a[n]; int x,y;
    for (int i=0;i<n;i++){
        cin>>x>>y;
        a[x]=y;
    }

    dfs(a,0);
}
