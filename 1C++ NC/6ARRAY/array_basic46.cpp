#include<bits/stdc++.h>
using namespace std;
long long cnt[28];

int main(){
	int n; cin>>n;
	int a[n]; 
	for (int i=0;i<n;i++) {
		cin>>a[i];
		cnt[a[i]%28]++;
	}
	
	long long c=0;
	for (int i=0;i<=14;i++){
		if (i==14 or i==0)
			c+= (cnt[i]*(cnt[i]-1))/2;
		else c+= cnt[i]*cnt[28-i];
	}
	cout<<c;
}
