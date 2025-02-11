#include<bits/stdc++.h>
using namespace std;
int cnt[int(1e6)+5];


int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	
	int mi=0, mic=-1;
	for (int i=0;i<int(1e6)+5;i++){
		if (cnt[i]>mic){
			mi=i;
			mic=cnt[i];
		}
	}
	cout<<mi<<" "<<mic;
}
