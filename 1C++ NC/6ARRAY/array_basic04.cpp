#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	cin>>x;
	int mi=0,ma=0;
	for (int i=0;i<n;i++){
		if (a[i]>x) ma++;
		else if (a[i]<x) mi++;
	}
	cout<<mi<<endl<<ma;
}
