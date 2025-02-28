#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
int p[maxn+3];
int n,h;
void sang(){
    for (int i=2;i<=n+3;i++){ p[i] = 1;}
    p[0]=0; p[1]=0;
    for (int i=2;i*i<=n+3;i++){
        if (p[i]){
            for (int j=i*i; j<=n;j+=i){
                p[j]=0;
            }
        }
    }
}

int tonguoc(int n){
    int s=0;
    while (n){
        s+=(n%10);
        n/=10;
    }
    return s;
}

int main(){
    freopen("DOCAO.INP", "r", stdin);
    freopen("DOCAO.OUT", "w", stdout);
    cin>>n>>h;
    sang();
    int c=0;
    for (int i=2;i<=n;i++){
        if (p[i] and tonguoc(i)==h){
            cout<<i<<endl; c++;
        }
    }
    cout<<c;
}
