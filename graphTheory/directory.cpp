#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define bp pop_back
vector<string> v;
int n;
int p[205];
vector<int> vt;

void in(){
    int s=vt.size();
    for (int i=s-1;i>0;i--){
        cout<<v[vt[i]]<<"/";
    }
    cout<<v[vt[0]];
    vt.clear();
}

void find_directory(int x){
    vt.pb(x);
    if (p[x]!=-1) find_directory(p[x]);
    else in();
}


int main(){
    cin>>n;
    string s;
    for (int i=0;i<n;i++){
        cin>>s; v.pb(s);
    }
    int x,y;
    for (int i=0;i<n;i++){
        p[i]=-1;
    }
    for (int i=0;i<n-1;i++){
        cin>>x>>y;
        p[--y] = --x;
    }

    for (int i=0; i<n; i++){
        find_directory(i);
        cout<<endl;
    }
}
