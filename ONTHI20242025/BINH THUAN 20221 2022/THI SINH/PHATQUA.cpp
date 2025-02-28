#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("PHATQUA.INP", "r", stdin);
    freopen("PHATQUA.OUT", "w", stdout);
    int a,b; cin>>a>>b;
    int x = __gcd(a,b);
    if (x<2){
        cout<<1;
        return 0;
    }
    int c=2;
    for (int i=2;i*i<=x;i++){
        if (x%i==0){
            c++;
            if (i*i!=x) c++;
        }
    }
    cout<<c;
}
