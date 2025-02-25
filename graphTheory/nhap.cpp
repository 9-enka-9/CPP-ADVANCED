#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int a[n+1][n+1];
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n;j++) a[i][j]=0;
    }
    int u,v,x;
    //nhap do thi binh thuong khong trong so, khong huong
//    for (int i=0;i<m;i++){
//        cin>>u>>v;
//        a[u][v]=1;
//        a[v][u]=1;
//    }

    //nhap do thi co trong so, khong huong
    for (int i=0;i<m;i++){
        cin>>u>>v>>x;
        a[u][v]=x;
        a[v][u]=x;
    }

    //nhap do thi khong trong so, co huong
//    for (int i=0;i<m;i++){
//        cin>>u>>v;
//        a[u][v]=1;
//    }

    //nhap do thi co trong so, co huong
//    for (int i=0;i<m;i++){
//        cin>>u>>v>>x;
//        a[u][v]=x;
//    }

//    for (int i=1;i<=n;i++){
//        for (int j=1;j<=n;j++) cout<<a[i][j];
//        cout<<endl;
//    }

    for (int i=1;i<=n;i++){
        int s=0;
        for (int j=1;j<=n;j++) s+=a[i][j];
        cout<<s<<" ";
    }
}
