#include<bits/stdc++.h>
using namespace std;
int k[10000];

int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	int cm=0, old=a[0];
	k[cm]=1;
	for (int i=1;i<n;i++){
		if (a[i]!=old){
			old=a[i];
			cm++;
			k[cm]++;
		} else {
			k[cm]++;
		}
	}
	cm++;
	
	if (a[0]==1){
		for (int i=0;i<cm;i+=2) cout<<k[i]<<" ";
		cout<<endl;
		for (int i=1;i<cm;i+=2) cout<<k[i]<<" ";		
	} else {
		for (int i=1;i<cm;i+=2) cout<<k[i]<<" ";
		cout<<endl;
		for (int i=0;i<cm;i+=2) cout<<k[i]<<" ";
	}
}
