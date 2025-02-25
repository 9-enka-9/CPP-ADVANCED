#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+5;
bool prime[maxn];

void sang(){
    for (int i=0;i<maxn;i++){
        prime[i]=true;
    }

    for (int i=2;i*i<maxn;i++){
        if (prime[i]){
            for (int j=i*i;j<maxn;j+=i){
                prime[j]=false;
            }
        }
    }
}

int main(){
    freopen("HAPPY.INP", 'r', stdin);
    freopen("HAPPY.OUT", 'w', stdout);
    sang();
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];

    int c=0;
    for (int i=0;i<n-2;i++){
        for (int j=i+1;j<n-1;j++){
            for (int k=j+1;k<n;k++){
                int t=__gcd(a[i],__gcd(a[j],a[k]));
                if (not prime[t] and t>1) c++;
            }
        }
    }

    cout<<c;
}
