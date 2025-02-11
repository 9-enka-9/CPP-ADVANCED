#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("BAI2.INP", "r", stdin);
	freopen("BAI2.OUT", "w", stdout);
	int n;
	cin>>n;
	int x[n+1], y[n+1];
	for (int i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	
	int s=abs(x[0]-x[1]) + abs(y[0]-y[1]);
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			int t=abs(x[i]-x[j]) + abs(y[i]-y[j]);
			if ( t > s ){
				s = t;
			}
		}
	}
	cout<<s;
}
