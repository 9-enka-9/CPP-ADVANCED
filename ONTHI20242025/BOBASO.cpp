#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    long long a[n+2];
    for (int i=0;i<n;i++) cin>>a[i];
    long long maxL[n+2] = {a[0]}, minL[n+2]={a[0]}, maxR[n+2], minR[n+2];
    //left
    for (int i=1;i<n;i++){
        maxL[i] = max(a[i],maxL[i-1]);
        minL[i] = min(a[i], minL[i-1]);
    }
    maxR[n-1] = minR[n-1] = a[n-1];
    //right
    for (int i=n-2;i>=0;i--){
        maxR[i] = max(a[i], maxR[i+1]);
        minR[i] = min(a[i], minR[i+1]);
    }
    long long ans=LONG_MIN;
    for (int i=1;i<=n-2;i++){
        ans = max(ans, 2*a[i] + abs(maxR[i+1] - maxL[i-1]));
        ans = max(ans, 2*a[i] + abs(maxR[i+1] - minL[i-1]));
        ans = max(ans, 2*a[i] + abs(minR[i+1] - maxL[i-1]));
        ans = max(ans, 2*a[i] + abs(minR[i+1] - minL[i-1]));
    }
    cout<<ans;
}
