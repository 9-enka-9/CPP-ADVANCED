#include<bits/stdc++.h>
using namespace std;
int cnt[int(1e6)+5];


int main(){
	int n; cin>>n;
	int a[n];
	int ma=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		if (ma<cnt[a[i]]) ma=cnt[a[i]];
	} 
	
	for (int i=0;i<n;i++){
		if (cnt[a[i]]==ma){
			cout<<a[i]<<" "<<ma;
			return 0;
		}
	}
}
