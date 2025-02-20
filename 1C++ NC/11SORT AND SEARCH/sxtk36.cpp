#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,x; cin>>n>>m;
    multiset<int> ms;
    int a[m];
    for (int i=0;i<n;i++){
        cin>>x; ms.insert(x);
    }
    for (int i=0;i<m;i++){
        cin>>a[i];
    }

    for (int i=0;i<m;i++){
        auto it = ms.upper_bound(a[i]);
        it--;
        if (it!=--ms.begin()){
            cout<<*it<<endl;
            ms.erase(it);
        } else cout<<-1<<endl;
    }
}
