#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,t; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];

    set<int> digit;
    for (int i=0; i<n;i++){
        while (a[i]>0){
            digit.insert(a[i]%10);
            a[i]/=10;
        }
    }
    for (auto it=digit.begin();it!=digit.end();it++){
        cout<<*it<<" ";
    }
}
