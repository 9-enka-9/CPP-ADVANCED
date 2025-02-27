#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("MOVIE.INP", "r", stdin);
    freopen("MOVIE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    int maxl=1;
    map<int,int> mp;
    int start=0;
    for (int i=0;i<n;i++){
        if (mp.find(a[i]) == mp.end() or mp[a[i]]==0){
            mp[a[i]]++;
            int j=i+1;
            while (j<n and (mp.find(a[j])==mp.end() or mp[a[j]]==0)){
                mp[a[j]]++; j++;
            }
            maxl=max(j-start,maxl);
            mp[a[i]]--;
            i=j-1;
            start++;
        } else {
            while (start+1<n and a[start]!=a[i]){
                mp[start]--; start++;
            }
            start++;
        }
    }
    cout<<maxl;
}
