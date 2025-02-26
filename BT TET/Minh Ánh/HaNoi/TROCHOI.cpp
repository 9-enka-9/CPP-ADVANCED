#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int n;
void left(vector<vector<int>> &v,int hang, int steps){
    vector<int> ve(n);
    for (int i=n-1;i>=0;i--){
        if (i-steps>=0) ve[i-steps] = v[hang][i];
        else ve[n+i-steps]=v[hang][i];
    }
    v.erase(v.begin()+hang);
    v.insert(v.begin()+hang,ve);
}

void right(vector<vector<int>> &v,int hang, int steps){
    vector<int> ve(n);
    for (int i=n-1;i>=0;i--){
        if (i+steps<n) ve[i+steps] = v[hang][i];
        else ve[n-i-steps]=v[hang][i];
    }
    v.erase(v.begin()+hang);
    v.insert(v.begin()+hang,ve);
}

int main(){
//    freopen("TROCHOI.INP", "r", stdin);
//    freopen("TROCHOI.OUT", "w", stdout);
    int q; cin>>n>>q;
    vector<vector<int>> v;
    int t=0;
    for (int i=0;i<n;i++){
        vector<int> ve;
        for (int j=0;j<n;j++) ve.pb(++t);
        v.pb(ve);
    }

    for (int i=0;i<q;i++){
        int p,x,y; cin>>p>>x>>y; x--; y--;
        int row=p/n, col=p%n-1;
        if (col==-1){col=n-1;row--;}
        int h1=n-row+x, h2=row-x;
        int c1=n-col+y, c2=col-y;
        int hang=min(abs(h1),abs(h2)), cot=min(abs(c1),abs(c2));
        cout<<hang+cot;
        // dich cot
        if (abs(c1)<abs(c2)){
            left(v,row,abs(c1));
        } else right(v,row,abs(c2));
    }
    for (int j=0;j<n;j++){
        for (int k=0;k<n;k++) cout<<v[j][k]<<" ";
        cout<<endl;
    }

}
