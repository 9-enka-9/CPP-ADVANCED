#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001];
bool visited[1001];
void dfs(int u){
    visited[u]=true;
    cout<<u<<" ";
    for (int v=1;v<=n;v++){
        if (a[u][v]==1 and not visited[v]){
            dfs(v);
        }
    }
}

int main(){
    cin>>n>>m;
    for (int i=0;i<=n;i++) visited[i]=false;
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n;j++) a[i][j]=0;
    }
    int u,v;
    for (int i=0;i<m;i++){
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
    dfs(1);
}
