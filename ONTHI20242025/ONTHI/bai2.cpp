#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
bool p[maxn+3];

void sang(){
    for (int i=0;i<maxn;i++) p[i]=1;
    p[0]=p[1]=0;
    for (int i=2;i*i<=maxn;i++){
        if (p[i])
            for (int j=i*i;j<=maxn;j+=i)
                p[j]=false;
    }
}

int uocnt(int n){
    for (int i=sqrt(n);i>=2;i++){
        if (n%i==0 and p[i])
    }
}

int main(){
    int n; cin>>n;

}
