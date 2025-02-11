#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int n;

void rev(vector<int> &v){
    for (int i=0;i<n/2;i++){
        swap(v[i], v[n-i-1]);
    }
}

void nhap(vector<int> &v){
    cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        v.pb(x);
    }
}

void in(vector<int> &v){
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    nhap(v);
    rev(v);
    in(v);
}
