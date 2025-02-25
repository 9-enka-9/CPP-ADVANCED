#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001];
bool visited[1001];
int start, endp;
vector<int> road;
vector<vector<int>> roads;
int minl=1001;

void in(){
    int s=road.size();
    for (int i=0;i<s;i++){
        cout<<road[i]<<" ";
    }
    cout<<endl;
}

void dfs(int u){
    road.push_back(u);
    visited[u]=true;
    if (u!=endp){
        for (int v=1;v<=n;v++){
            if (not visited[v] and a[u][v]==1) dfs(v);
        }
    } else{
        roads.push_back(road);
        minl=(minl, road.size());
    }
    road.pop_back();
    visited[u]=0;
}

int main(){
    cin>>n>>m;
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n;j++){
            a[i][j]=0;
        }
    }
    int x,y;
    for (int i=0;i<m;i++){
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    for (int i=0;i<=n;i++){
        visited[i]=false;
    }

    start=2;
    endp=4;
    dfs(start);
    for (int i=0;i<roads.size();i++){
        if (minl==roads[i].size()){
            int s=roads[i].size();
            for (int j=0;j<s;j++){
                cout<<roads[i][j]<<" ";
            }
            break;
        }
    }
}
