#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+5];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		int bot=0, up=0;
		for (int j=1;j<=i;j++){
			if (a[j]>a[i]) bot++;
		}
		for (int j=i+1;j<=n;j++){
			if (a[j]<a[i]) up++;
		}
		cout<<bot<<" "<<up<<endl;
	}
}
