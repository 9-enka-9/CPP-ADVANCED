#include<bits/stdc++.h>
using namespace std;

double s(double n){
    if (n==1) return 1;
    return 1/n + s(n-1);
}

int main(){
    double n; cin>>n;
    cout<<fixed<<setprecision(3)<<s(n);
}
