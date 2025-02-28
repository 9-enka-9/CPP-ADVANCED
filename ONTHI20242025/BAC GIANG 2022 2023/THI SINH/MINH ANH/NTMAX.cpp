#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6*5;
bool p[maxn+3];

void sang(){
    for (int i=2;i<maxn;i++) p[i]=true;
    p[0]=p[1]=false;
    for (int i=2;i*i<maxn;i++){
        if (p[i])
            for (int j=i*i;j<maxn;j+=i){
                p[j]=false;
            }
    }
}

int main(){
    sang();
//    freopen("NTMAX.INP", "r", stdin);
//    freopen("NTMAX.OUT", "w", stdout);
    string s; cin>>s;
    s+='a';
    int n = s.size();
    int c=0, res=0, cur=0;
    for (int i=0;i<n;i++){
        if ('0'<=s[i] and s[i]<='9'){
            cur = cur*10 + (s[i]-'0');
            c++;
        } else {
            if (p[cur]) res = max(cur, res);
            cur=0;
        }
    }
    cout<<c<<endl<<res;
}
