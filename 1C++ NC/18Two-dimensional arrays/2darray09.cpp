#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n<2) return false;
    for (int i=2;i*i<=n;i++){
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    int n; cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin>>a[i][j];

    int c=0;
    for (int i=0;i<n;i++){
        if (isPrime(a[i][i])) c++;
        if (isPrime(a[i][n-i-1])) c++;
    }
    if (n%2!=0){
        if (isPrime(a[n/2][n/2])) c--;
    }
    cout<<c;
}
