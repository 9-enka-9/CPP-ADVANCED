#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int mod=1e9+7;

ll F[1000005];

void buildF(ll a[]){
	a[1]=2;
	a[2]=8;
	for (int i=3;i<=1e6+1;i++){
		a[i]=(2*(a[i-1]%mod)+8*(a[i-2]%mod))%mod;
	}
}

int main(){
    //Xây d?ng m?ng F[] d? luu dãy s? 28, nh? chia du khi tính
    buildF(F);
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}



